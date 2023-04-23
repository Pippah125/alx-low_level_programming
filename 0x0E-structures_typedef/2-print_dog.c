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
		d->owner = "(nil)";
	}
	if(d->name == NULL)
	{
		d->name = "(nil)";
	}
		printf("Age:%f\n Name:%s\n Owner:%s\n",d->age, d->name, d->owner);
}
