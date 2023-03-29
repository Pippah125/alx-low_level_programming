#include "main.h"

/**
* swap - swap the value of a to be
*
* Return: Always 0 (success)
*/
void swap_int(int *a, int *b)
{
	int bel;

	bel = *a;
	*a = *b;
	*b = bel;
}
