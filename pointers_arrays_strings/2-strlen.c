#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 *
 * @s: puntero
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int string = 0;

	while (*s++)
	string++;
	return (string);
}
