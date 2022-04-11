#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include "main.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: struct dog type
 * @name: char datatype
 * @age: float datatype
 * @owner: char datatype
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
