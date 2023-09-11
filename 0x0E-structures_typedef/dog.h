#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Struct dog
 * @name: Name to initialize
 * @age: Age to initialize
 * @owner: Owner to initialize
 * Return: Null
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
