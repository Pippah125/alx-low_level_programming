#include"main.h"
/**
 * set_bit - set the bit at index to 1
 * @index:index to set value to 1
 * @n:number to change
 *
 * Return:0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
