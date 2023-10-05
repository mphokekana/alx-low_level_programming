#include <stdlib.h>
#include "dog.h"

/**
 *new_dog - creat a new dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of the dog
 *Return: NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int a, b, c;

	struct dog *n_dog = NULL;

	b = 0;
	while (name[b] != '\0')
		b++;
	c = 0;
	while (owner[c] != '0')
		c++;

	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = malloc(b + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(c + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	for (a = 0; a <= b; a++)
		n_dog->name[a] = name[a];
	for (a = 0; a <= c; a++)
		n_dog->owner[a] = owner[a];
	n_dog->age = age;
	return (n_dog);
}
