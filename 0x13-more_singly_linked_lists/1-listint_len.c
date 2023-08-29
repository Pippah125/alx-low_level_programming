#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
size_t listint_len(const listint_t *h)
{
	int counter;
	if(h!=NULL)
	{
		while(h)
		{
			h = h->next;
			counter++;
		}
	}
	return(counter);
}
