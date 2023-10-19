#include"lists.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
/**
 * add_node_end-adds a node to the end of list_t
 * @head:node to be added
 * @str:string to be inputed in node
 *
 * Return:0
 */
int length(const char *a);
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newlist;
	list_t *temp;
	if(str != NULL)
	{
		newlist = malloc(sizeof(list_t));
	}
	if(newlist == NULL)
	{
		return(NULL);
	}
	newlist->str= strdup(str);
	newlist->len = length(str);
	newlist->next = NULL;
	if(*head == NULL)
	{
		*head = newlist;
		return(*head);
	}
	else
	{
		temp = *head;
		while(temp->next != NULL)
		{
			temp = temp->next;
			temp->next = newlist;
			return(temp);
		}
	}
	return(NULL);
}
/**
 * length - calculates the length of a string
 * @a:string to be calcualted
 *
 * Return:0
 */
int length(const char *a)
{
	int count;
	for(count = 0; *a != '\0'; a++)
	{
		count++;
	}
	return(count);
}
