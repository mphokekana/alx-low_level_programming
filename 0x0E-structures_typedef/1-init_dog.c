#include <stdlib.h>
#include "dog.h"
/**
 *init_dog - initalizes the variable of type struct dog
 *@d: pointer to struct
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}


