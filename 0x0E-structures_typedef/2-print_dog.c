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
		d-> = "(nil)"
	}
	else
	{
		printf("Owner:%s\n", d->owner);
	}
	if(d->name == NULL)
	{
		d->name ="(nil)"
	}
	else
	{
		printf("Name:%s\n", d->name);
	}
	
	
		printf("Age:%f",d->age);
}
