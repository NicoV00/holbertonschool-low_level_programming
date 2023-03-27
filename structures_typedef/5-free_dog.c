#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - set dog free
 * @d: dog soon to be free
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
