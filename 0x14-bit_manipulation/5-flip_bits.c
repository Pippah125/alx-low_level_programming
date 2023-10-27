#include"main.h"
/**
 *flip_bits- how may bit would i need to get from one number to theother
 *@n:value
 *@m:value
 *
 * Return:0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count;
	unsigned long int bit;

	count = 0;
	bit = 0;
	count = n ^ m;
	while (count > 0)
	{
		if (count & 1)
		bit++;
		count  >>= 1;
	}
	return (bit);
}

