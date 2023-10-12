#include<stdlib.h>
#include"dog.h"
/**
 * init_dog- creates structure with members
 * @d:new strurcture
 * @name:name of dog
 * @age:age of dog
 * @owner:owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
