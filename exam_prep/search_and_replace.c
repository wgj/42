#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	char *str;
	char find;
	char replace;
	char c;

	// If we don't have 3 arguments (+ 1 command), print newline and return.
	if (argc != 4)
	{
		char c = '\n';
		write(1, &c, 1);
		return (1);
	}

	// Store string, find char, and replace char.
	str = argv[1];
	find = *argv[2];
	replace = *argv[3];
	i = 0;
	// Iterate through 
	while (str[i])
	{
		if (str[i] == find)
		{
			c = replace;
		}
		else
		{
			c = str[i];
		}
		write(1, &c, 1);
		i++;
	}
	c = '\n';
	write(1, &c, 1);
	return (0);
}