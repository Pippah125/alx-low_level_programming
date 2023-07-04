#include<string.h>
#include<stdlib.h>
#include "lists.h"

int count(const char* z)
{
	int t = 0;
	while(*z != NULL)
	{
		z++;
		c++;
	}
	return(t);
}

ist_t *add_node(list_t **head, const char *str)
{
	list_t *tail;
	if(head != NULL && str != NULL)
	{
		tail = malloc(sizeof(list_t));
	}
	if(tail == NULL)
	{
		return(NULL);
	
	tail ->str = strdup(str);
	tail -> len= count(str);
	tail -> next = *head;
	*head = tail;
	return(tail);
	}
	return(0);
}

