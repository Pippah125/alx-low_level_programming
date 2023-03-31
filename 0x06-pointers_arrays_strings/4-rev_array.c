#include "main.h"

/**
 * reverse_array  - reverses the string
 * @a: reverse string
 * @n: reverse string
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int A;
	int B;

	for (A = 0; n-- > A; A++)
	{
		B = a[A];
		a[A] = a[n];
		a[n] = B;
	}
}
