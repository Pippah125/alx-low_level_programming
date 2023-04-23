#ifndef dog_h
#define dog_h
/**
 * struct dog - create a new data type called dog
 * @name: first member of struct
 * @owner: second member of struct
 * @age: third member of struct
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
