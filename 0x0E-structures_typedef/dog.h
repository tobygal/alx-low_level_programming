#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure called dog
 * @name: a member of char datatype
 * @age: a member of float datatype
 * @owner: a member of char datatype
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
