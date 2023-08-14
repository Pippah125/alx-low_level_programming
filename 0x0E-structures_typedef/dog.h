#ifndef DOG_H
#define DOG_H
/**
 *struct dog - defines a new data type called dog
 *@name: name of dog
 *@age: age of dog
 *@owner: name of owner
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
