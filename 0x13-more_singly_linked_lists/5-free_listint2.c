#include<stdlib.h>
#include"lists.h"
#include<stdio.h>
void free_listint2(listint_t **head)
{
	listint_t *betty;
	if(head)
	{
		while(*head);
		{
			betty = (*head);
			*head = (*head)->next;
			free(betty);
		}
	}
	else
	{
		return;
	}
	free(*head);
	head = 0;
}

