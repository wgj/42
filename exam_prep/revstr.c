#include <stdio.h>

int		my_length(char *string) {
	int len;
	int i;

	i = 0;
	len = 0;
	while (string[i] != '\0')
	{
		len++;
	}
	return (len);
}

void	my_reverse(char *string) 
{
	// create pointers to string
	char *beg;
	char *end;
	char swap;
	int i;

	beg = string;
	end = string;
	i = 0;
	// set one pointer to the end of string
	while (i <= my_length(string))
	{
		end++;
	}
	// While, to half the length of string
	while (i < my_length(string)/2)
	{
	// swap the values of beg and end pointers
	swap = *beg;
	*beg = *end;
	*end = swap;

	// Advance one pointers 
	// reverse another pointer
	beg++;
	end++;
		i++;
	}
	// At the end of the while, string will be reversed.
}

int main() {
	char string[100] = {"longerstring"};
	
	my_reverse(string);
	printf("string: %s\n", string);
	return 0;
}