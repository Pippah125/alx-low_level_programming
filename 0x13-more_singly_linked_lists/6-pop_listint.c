#include"lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * pop_listint - delete the first node of a linked list
 * @head: the first node of the linked list
 *
 * Return:0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int count;

	count = 0;
	if (*head != NULL)
	{
		temp = (*head)->next;
		count = (*head)->n;
		free(*head);
		*head = temp;
	}
	return (count);
}
