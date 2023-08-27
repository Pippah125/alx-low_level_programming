#include<stdlib.h>
#include"dog.h"
int strlen2(char *s);
char *copy(char *dest, char *src);
/**
 * strlen2- calulates the length of string
 * @s:string to be calulated
 *
 * Return:0
 */
int strlen2(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
/**
 * copy-copies string from the source string to the destination string
 * @dest:string copied
 * @src:string to be copied
 *
 * Return:0
 *
 */
char *copy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
/**
 * new_dog- creates a new structure
 * @name:name of dog
 * @age:age of dog
 * @owner:owner of dog
 *
 * Return:0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int new_name;
	int new_owner;

	new_name = 0;
	new_owner = 0;
	if (name != NULL && owner != NULL)
	{
		new_name = strlen2(name) + 1;
		new_owner = strlen2(owner) + 1;
		my_dog = malloc(sizeof(dog_t));
		if (my_dog == NULL)
		{
			return (NULL);
		}
		my_dog->name = malloc(sizeof(char) * new_name);
		if (my_dog->name == NULL)
		{
			free(my_dog);
			return (NULL);
		}
		my_dog->owner = malloc(sizeof(char) * new_owner);
			if (my_dog->owner == NULL)
			{
				free(my_dog->name);
				free(my_dog);
				return (NULL);
			}
			my_dog->name = copy(my_dog->name, name);
			my_dog->owner = copy(my_dog->owner, owner);
			my_dog->age = age;
	}
	return (my_dog);
}
