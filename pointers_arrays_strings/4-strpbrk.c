#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes 
 *
 * @s: string 
 * @accept: bytes in string
 *
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int f;

	while (*s != '\0')
	{
		f = 0;
		while (*(accept + i) != '\0')
		{
			if (*s == *(accept + i))
				f = 1;
			i++;
		}
		i = 0;
		if (f == 1)
			return (s);
		s++;
	}
	return (NULL);
}
