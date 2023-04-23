#include<stdio.h>
#include<stdlib.h>
#include "dog.h"
void print_dog(struct dog *d)
{
	 if (d == NULL)
                return;
	d = &my_dog;
	d->name = name;
	d->age = age;
	d->owner = owner;
	if(d->owner == NULL)
	{
		printf("Owner:(nil)");
	}
	else
	{
		printf("Owner:%s", d->owner);
	}
	if(d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Name:%s", d->name);
	}
	if(d->age == NULL)
	{
		printf("Age:(nil)");
	}
	else
	{
		printf("Age:%f",d->age);
	}
}
