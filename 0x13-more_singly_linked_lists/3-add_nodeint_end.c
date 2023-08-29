#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *betty;
	if(head)
	{
		temp = malloc(sizeof(listint_t));
		if(temp == NULL)
		{
			return(NULL);
		}
		temp->n = n;
		temp->next = NULL;
		if(*head == NULL)
		{
			*head = temp;
			return(*head);
		}
		else
		{
			betty = *head;
			while(betty->next)
			{
				betty = betty->next;
				temp->next= new_list;
				return(betty);
			}
		}
	}
		return(NULL);
}
