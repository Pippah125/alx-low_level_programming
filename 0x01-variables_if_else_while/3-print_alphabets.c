#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	char upper = 'A';

	char lower = 'a';

	for(upper = 'A' ; upper <= 'Z'; upper++)
		putchar(upper);
	for (lower = 'a' ; lower <= 'z'; lower ++)
	putchar(lower);
	putchar('\n');
	
	return (0);
}
