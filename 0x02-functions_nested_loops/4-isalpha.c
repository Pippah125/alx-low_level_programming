#include "main.h"

/**
 * _isalpha - checks if a letter is an alphabet
 * @c: value to be checked
 *
 * Return: 1 if a letter is an alphabet.
 *
 */
int _isalpha(int c)
{

		if
		((c >= 'a' &&  c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
		else
			return (0);
}
