#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Struct dog if fails returns NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *g_dog;
	int i, lname, lowner;

	g_dog = malloc(sizeof(*g_dog));
	if (g_dog == NULL || !(name) || !(owner))
	{
		free(g_dog);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	g_dog->name = malloc(lname + 1);
	g_dog->owner = malloc(lowner + 1);

	if (!(g_dog->name) || !(g_dog->owner))
	{
		free(g_dog->owner);
		free(g_dog->name);
		free(g_dog);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		g_dog->name[i] = name[i];
	g_dog->name[i] = '\0';

	g_dog->age = age;

	for (i = 0; i < lowner; i++)
		g_dog->owner[i] = owner[i];
	g_dog->owner[i] = '\0';

	return (g_dog);
}
