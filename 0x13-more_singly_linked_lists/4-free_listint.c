#include"lists.h"
#include<stdlib.h>
/**
 * free_listint - free a linked llist
 * @head: the head of the linked list
 *
 * Return:0
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
