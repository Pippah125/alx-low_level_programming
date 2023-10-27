#include"main.h"
/**
 * clear_bit- sets bit at particular index to 0
 * @n:value to change
 * @index:index to set to 0
 *
 * Return:0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
