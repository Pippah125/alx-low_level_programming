#include"lists.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/**
 * length-calculates the length of string
 * @a:string to be calculated
 *
 * Return:0
 */
int length(const char *a);
int length(const char *a)
{
	  int count;
	for(count = 0; *a != '\0'; a++)
	{	count++;
	}
	return(count);
}
/**
 * add_node-adds a node to the beginingo of str
 * @str:string to be added to node
 * @head:node to be created
 *
 * Return:0
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	if(head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if(temp == NULL)
		{
			return(NULL);
		}
		temp->str = strdup(str);
		temp->len= length(str);
		temp->next = *head;
		return(temp);
	}
	return(0);
}
