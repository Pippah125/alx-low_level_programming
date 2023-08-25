#include <stdio.h>
#include <stdlib.h>
#include "lists.h" // Make sure this includes the definition of list_t

size_t print_list(const list_t *h)
{
    size_t count = 0;
    while (h != NULL)
    {
        if (h->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("[%zu] %s\n", h->len, h->str);
        }

        h = h->next;
        count++;
    }
    return count;
}

