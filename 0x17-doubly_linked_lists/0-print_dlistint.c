#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * print_dlistint - print and count elements and nodes
 * @h:struct to dislint
 *
 * Return:0
 */
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
		printf("\n");
	}
	return (count);
}
