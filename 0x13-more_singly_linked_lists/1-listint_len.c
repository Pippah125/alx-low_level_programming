#include"lists.h"
#include<stdio.h>
/**
 * listint_len - returns number of elements in a linked list
 * @h:the first node of the list
 *
 * Return:0
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
