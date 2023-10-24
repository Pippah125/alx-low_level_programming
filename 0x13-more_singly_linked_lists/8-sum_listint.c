#include"lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * sum_listint - calculates the sum of all numbers in a linked list
 * @head:The first node of the linked list
 *
 * Return:0
 */
int sum_listint(listint_t *head)
{
	int sum;
	sum =0;
	while(head != NULL)
	{
		sum =sum + head->n;
		head=head->next;
	}
	return(sum);
}
