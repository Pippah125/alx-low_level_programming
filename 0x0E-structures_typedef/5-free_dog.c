#include<stdlib.h>
#include"dog.h"
/**
 * free_dog - frees the sructure dog_t
 * @d:structure to be freeded
 *
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
