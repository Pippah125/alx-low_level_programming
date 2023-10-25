#include"lists.h"
#include<stdio.h>
/**
 * print_listint- print all elements in a linked list
 * @h: the first node of the list
 *
 *Return:0
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

