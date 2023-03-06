#include "main.h"


/**
 * _memset - Fills memory with a constant byte
 * @s: string array
 * @b: char
 * @n: number of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
