#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
size_t print_list(const list_t *h)
{
	typedef struct list_s
	{
		char *str;
		unsigned int len;
		struct list_s *next;
	} list_t;
	size_t count;
	list_t *head;
	head = (list_t *)h;
	count = 0;
	while(head != NULL)
	{

	 	if( head ->str == NULL)
	 	{
	 	printf("[%lu] (nil)\n",count);
	 	}
	 	else
	 	{
		 printf("[%lu] %s\n", count, head -> str);
	 	}
		count++;
		head  = head ->next;
	}
	 return(count);
}
