#include"lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * insert_nodeint_at_index - inserts  a new node to  a linked list in a paritcular  position
 * @head:the first node of a linked list
 * @idx:the place where new node is to be added
 * @n:the value for the new node to contain
 *
 * Return:0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint *new_node;
	listint *copy;
	unsigned int count;
	if(head!= NULL)
	{
		new_node = malloc(sizeof(listint_t));
	
	if(new_node == NULL)
	{
		return (NULl);
	}
	else
	{
		new_node-> =n;
	}
	if(idx > 0)
	{
		copy = *head;
	
		while(copy != NULL)
		{
		if(count == idx )
		{
			new_node->next =copy->next;
			copy->next = new_node;
			return (new_node);
		}
		copy = copy->next;
		count++;
		}
		if(idx > count)
		{
			return(NULL);
		}
	}
	else
	{
		new_node->next =*head;
		*head =new_node;
	}
	return(new_node);
}
	return (NULL);
}
