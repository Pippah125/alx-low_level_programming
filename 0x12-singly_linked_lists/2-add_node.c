#include<string.h>
#include<stdlib.h>
#include "lists.h"
/**
 * count - return length of string
 * @z: string to be counted
 *
 * Return: string len
 */
int count(const char *z)
{
	int t = 0;

	while (*z != '\0')
	{
		z++;
		t++;
	}
	return (t);
}

/**
 * add_node - add new node to beginning of linked list
 * @head: linked list
 * @str: string to add to the node
 *
 * Return:address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tail;

	if (head != NULL && str != NULL)
	{
		tail = malloc(sizeof(list_t));
	}
	if (tail == NULL)
	{
		return (NULL);
	}
	tail->str = strdup(str);
	tail->len = count(str);
	tail->next = *head;
	*head = tail;
	return (tail);
}
