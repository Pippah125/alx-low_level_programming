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
		printf("(nil)\n",d->owner,);
	}
	else
	{
		printf("Owner:%s\n", d->owner);
	}
	if(d->name == NULL)
	{
		printf("(nil)\n", d->name);
	}
	else
	{
		printf("Name:%s", d->name);
	}
	
	
		printf("Age:%f",d->age);
}
