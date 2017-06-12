#include <unistd.h>

int	main(int argc, char *argv[])
{
	(void)argv;
	char c;
	if (argc < 2)
	{
		c = '\n';
		write(1, &c, 1);
	}
}