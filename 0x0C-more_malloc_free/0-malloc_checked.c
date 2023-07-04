#include<stdlib.h>
#include"main.h"
/**
 *malloc_checked - allocates space for array
 * @b:size of memory to be allocated
 *
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *betty;

	betty = malloc((b));

	if (betty == NULL)
	{
		exit(98);
	}
	return (betty);
}
