#include<stdlib.h>
#include"lists.h"
/**
 * free_list -frees list_t list
 * @head: list of list_t to free
 *
 */
void free_list(list_t *head)
{
	list_t *tail;
	while(head)
	{
		tail = head ->next;
		free(head -> str);
		free(head);
		head = tail;
	}
}
