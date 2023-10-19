#include"lists.h"
#include<stdlib.h>
/**
 * free_list-frees a node
 * @head:node to be freed
 *
 * Return:0
 */
void free_list(list_t *head)
{
	list_t *betty;
	betty = malloc(sizeof(list_t));
	while (head != NULL)
	{
		betty = head->next;
		free(head->str);
		free(head);
		head = betty;
	}
}
