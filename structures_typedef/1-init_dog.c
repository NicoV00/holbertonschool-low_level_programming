#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - dog 
 * @name: name of dog
 * @owner: owner of dog
 * @age: age of god
 * @d: adress of dog
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
