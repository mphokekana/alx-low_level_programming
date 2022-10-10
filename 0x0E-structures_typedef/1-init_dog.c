#include <stdlib.h>
#include "dog.h"

/**
 * int_dog - initalises the variable of type struct dog
  *@d: pointer to struct
  *@name: name of the dog
  *@age: of the dog
  *@owner: owner of the dog
  *Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
