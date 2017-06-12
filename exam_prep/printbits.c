#include <unistd.h>

void	print_bits(unsigned char octet)
{
	char bit;
	char byte[8];

	int i = 0;
	// Iterate 0..7 = i
	// store octect bitwise and 1 into byte[i]
	// bit shift right assign octet by 1
	while (i < 8)
	{
		bit = octet & 1;
		bit += '0';
		byte[i] = bit;
		i++;
		octet >>= 1;
	}
	// Print out the contents of byte[], starting with byte[7]
	i = 7;
	while (i >= 0)
	{
		bit = byte[i];
		write(1, &bit, 1);
		i--;
	}
	write(1, &bit, 1);
}
