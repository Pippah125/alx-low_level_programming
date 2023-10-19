#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * print_list-prints contents in list_t structure
 * @h:node to print
 *
 * Return:0
 */
size_t print_list(const list_t *h)
{
	size_t count;
	count = 0;
	while(h != NULL)
	{
		if(h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] (%s)\n", h->len, h->str);
		}
			h = h->next;
			count++;
	}
	return(count);
}
