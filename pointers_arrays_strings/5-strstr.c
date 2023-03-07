#include "main.h"
/**
 * _strstr - function locates a substring
 *
 * @haystack: string 
 * @needle: substring
 *
 * Return: char
 **/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *x = needle;

		while (*i == *x && *x != '\0')
		{
			i++;
			x++;
		}
		if (*x == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
