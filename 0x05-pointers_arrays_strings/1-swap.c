#include "main.h"

/**
*swap - swap the value of a to be
*@swap_int(int *a, int *b): swaps the value of a to b
*@a: will be changed to b
*@b: will be chaned to a
*
*Return: Always 0 (success)
*/
void swap_int(int *a, int *b)
{
	int bel;

	bel = *a;
	*a = *b;
	*b = bel;
}
