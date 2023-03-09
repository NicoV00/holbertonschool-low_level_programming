#include "main.h"

/**
* _strcmp - compares two strings.
* @s2: string
* @s1: string
* Return: 0
*/
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] - s2[x] == 0 && s1[x] != '\0')
	{
		x++;
	}
	return (s1[x] - s2[x]);
}
