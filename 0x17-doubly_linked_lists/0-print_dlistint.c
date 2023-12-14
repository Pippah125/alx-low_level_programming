#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int count;

	count = 0;
	while (current != NULL)
	{
		printf("%d", current->n);
		count++;
		current = current->next;
	}
	return (count);
}
