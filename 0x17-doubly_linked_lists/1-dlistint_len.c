#include"lists.h"
#include<stdio.h>
/**
 * dlistint_len- returns lenght of elements in lists
 * @h:list
 *
 * Return:0
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count;

	count = 0;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
