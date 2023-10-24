#include<stdlib.h>
#include<stdio.h>
#include"lists.h"

/**
 * delete_nodeint_at_index- deletesthe node at a particular index in the linked list
 * @head: the first node of the list
 * @index: index of node to delete
 *
 * Return:0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned  int count;
	listint_t *new_node;
	listint_t *temp;
	new_node = *head;
	if(new_node == NULL)
	{
		return(-1);
	}
	if(index == 0)
	{
		*head = (*head)->next;
		free(new_node);
		return(1);
	}
	for(count = 0;count < (index -1); count++)
	{
		if(new_node->next == NULL)
		{
			return(-1);
		}
		new_node = new_node->next;
	}
	temp=new_node->next;
	new_node->next = temp->next;
	free(temp);
	return(1);
}
