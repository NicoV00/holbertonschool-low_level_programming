#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - concatenate strings
 * @s1: string 1
 * @s2: string 2
 * Return: concated string
 */

char *str_concat(char *s1, char *s2)
{
	int leng1, leng2, leng3, i;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	leng1 = 0;
	while (*(s1 + leng1) != '\0')
	{
		leng1++;
	}

	leng2 = 0;
	while (*(s2 + leng2) != '\0')
	{
		leng2++;
	}

	leng3 = leng1 + leng2;

	a = (char*) malloc(leng3 * sizeof(char) +1);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < leng1; i++)
		a[i] = s1[i];
	for (i = 0; i < leng2; i++)
		a[i + leng1] = s2[i];

	return (a);
}
