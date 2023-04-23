#include"dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * init_dog - defrence the value of a struct to a pointer
 * @d: pointer to struct dog
 * @name: points to member name
 * @age: points to age
 * @owner: points to member owner
 *
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
		d->name = name;
		d->owner = owner;
		d->age = age;
}
