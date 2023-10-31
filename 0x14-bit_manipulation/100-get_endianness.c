#include"main.h"
/**
 * get_endianesses - get byte order 
 *
 * Return: 0
 */
int get_endianness(void)
{
	int digit = 1;
	char *order = (char *)&digit;

	if(*order == 1)
	{
		return (1);
	}
	return (0);
}
