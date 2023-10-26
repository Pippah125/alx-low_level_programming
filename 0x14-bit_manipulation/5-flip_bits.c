#include"main.h"
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

