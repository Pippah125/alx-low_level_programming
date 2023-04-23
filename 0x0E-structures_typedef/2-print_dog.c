#include<stdio.h>
#include<stdlib.h>
#include "dog.h"
void print_dog(struct dog *d)
{
	 if (d == NULL)
	 {
                return;
	 }
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
	
	
		printf("Age:%f",d->age);
}
