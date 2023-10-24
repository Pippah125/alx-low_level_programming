#include"lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * add_nodeint_end- adds a new node to the end of a linkedlist
 * @head:The first node of the linked list
 * @n:The value to be given to the end of the linked list
 *
 * Return:0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node;
	new_node=malloc(sizeof(listint_t));
	if(new_node==NULL)
	{
		return (NULL);
	}
	new_node->n= n;
	new_node->next =NULL;
	if(*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last_node = *head;
		while(last_node->next != NULL)
		{
			last_node= last_node->next;
			last_node->next = new_node;
		}
	}
	return(*head);
}

