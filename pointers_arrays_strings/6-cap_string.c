#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @c: char
 * Return: 0
 **/
char *cap_string(char *c)
{

	int i = 0;

	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
	while (c[i] != '\0')
	if (c[i] == ' ' || c[i] == '	' || c[i] == '\n'
		|| c[i] == ',' || c[i] == ';' || c[i] == '.' ||
		c[i] == '!' || c[i] == '?' || c[i] == '"' ||
		c[i] == '(' || c[i] == ')' || c[i] == '{' || c[i] == '}')
	{
	if (c[(i + 1)] >= 'a' && c[(i + 1)] <= 'z')
	{
		c[(i + 1)] = c[(i + 1)] - 32;
	}
	}
		i++;
	return (c);
}
