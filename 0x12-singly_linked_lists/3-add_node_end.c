#include<stdlib.h>
#include"lists.h"
#include<string.h>
#include<stdio.h>
/**
 * add_node_end - add node to the end of linked list
 * @head: original list
 * @str: string to add to node
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *betty;
	list_t *tail;
	size_t count;

	betty = malloc(sizeof(list_t));
	
	if(betty == NULL)
	{
		return(NULL);
	}
	betty->str = strdup(str);
	for(count = 0;str[count] != '\0'; count++)
	{
	}
	betty ->len = count;
	betty->next= NULL;
	tail = *head;
	if(*tail== NULL)
	{
		*head = betty;
		
	}
	else
	{
		while(tail -> next != NULL)
		tail = tail -> next;
		tail -> next = betty;
	
	}
	return(*head);
}
