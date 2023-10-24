#include"lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
 *get_nodeint_at_index-get the information of an index in a list
 * @head:The first node of the linked list
 *@index:the index of the node to get
 *
 *Return:0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; count < index; count++)
	{
		if (head  == NULL)
		{
			return (NULL);
		}

		head = head->next;
	}
	return  (head);
}
