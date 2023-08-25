#include<stdlib.h>
#include"lists.h"
#include<string.h>
#include<stdio.h>
/**
 * count - return length of string
 * @z: string to be counted
 * 
 * Return: string len
 */
int count(const char *z) {
	  int t = 0;
	    while (*z != '\0') 
	    {
		        z++;
			    t++;
		}
	      return (t);
}
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
	if(str != NULL)
	{
		betty = malloc(sizeof(list_t));
	
	if(betty == NULL)
	{
		return(NULL);
	}
	betty->str = strdup(str);
	betty->len= strlen(str);
	betty->next= NULL;
	if(*head == NULL)
	{
		*head = betty;
		return(*head);
	}
	else
	{
		tail = *head;
			for(; tail->next != NULL; tail = tail->next)
				tail->next = betty;
		return(tail);
	
	}
	
	}
	return(NULL);
}}
