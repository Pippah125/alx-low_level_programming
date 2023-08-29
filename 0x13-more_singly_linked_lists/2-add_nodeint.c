#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;
	if(head!= NULL)
	{
		temp = malloc(sizeof(listint_t));
		if(temp == NULL)
		{
			return(NULL);
		}
		temp->n = n;
		temp->next = *head;
		*head = temp;
		return(temp);
	}
	return(NULL);
}
