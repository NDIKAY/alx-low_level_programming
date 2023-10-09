#include "dog.h"
#include <stddef.h>

/**
 *init_dog - initialisation of dog structure
 *@d: pointer to dog
 *@name: name of dog
 *@age: age of dog
 *@owner: name of owner
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
