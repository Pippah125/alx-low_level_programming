#include "main.h"

/**
*swap_int(int *a, int *b)- changes a to b
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
