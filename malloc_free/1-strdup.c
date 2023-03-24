#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	char *a;
	int i, x = 0;

	if (str == NULL)
		return (NULL);

	while (str[x] != '\0')
		x++;

	a = malloc(sizeof(char) * x + 1);

	if (a == NULL)
		return (NULL);
	for (i = 0; i < x; x++)
		a[i] = str[i];

	return (a);
}
