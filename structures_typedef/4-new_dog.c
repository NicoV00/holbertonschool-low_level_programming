#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates new dog
 * @name: name of dog
 * @owner: owner of dog
 * @age: age of dog
 * Return: a dog object
 */

dog_t *new_dog(char *name, float age, char *owner)
{
		int i, x1, x2;
		dog_t *newdog;
		char *a, *b;

		x1 = 0;
		for (i = 0; name[i] != '\0'; i++)
			x1++;
		x2 = 0;
		for (i = 0; owner[i] != '\0'; i++)
			x2++;
		newdog = malloc(sizeof(dog_t));
		if (newdog == NULL)
			return (NULL);
		a = malloc((x2 + 1) * sizeof(char));
		if (a == NULL)
		{
			free(newdog);
			return (NULL);
		}
		for (i = 0; i < x1; i++)
			a[i] = name[i];
		a[i] = '\0';
		newdog->name = a;
		newdog->age = age;
		b = malloc((x2 + 1) * sizeof(char));
		if (b == NULL)
		{
			free(a);
			free(newdog);
			return (NULL);
		}
		for (i = 0; i < x2; i++)
			b[i] = owner[i];
		b[i] = '\0';
		newdog->owner = b;
		return (newdog);
}
