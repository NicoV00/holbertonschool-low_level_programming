#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: array sie
 * @c: char
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a =  malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);

	if (size == 0)
		return ('\0');

	for (i = 0; i <= size; i++)
		a[i] = c;
	return (a);
}
