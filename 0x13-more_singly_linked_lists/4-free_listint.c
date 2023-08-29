#include<stdlib.h>
#include"lists.h"
#include<stdio.h>
void free_listint(listint_t *head)
{
	listint_t *betty;
	while(betty)
	{
		betty = head;
		head = head->next;
		free(betty);
	}
	free(head);
}
