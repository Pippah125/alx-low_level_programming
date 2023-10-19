#include"lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * list_len-calculates the number of nodes in list_t
 * @h:node to be counted
 *
 * Return:0
 */
size_t list_len(const list_t *h)
{
	size_t count;
	count = 0;
	while(h != NULL)
	{
		h = h->next;
		count++;
	}
	return(count);
}

