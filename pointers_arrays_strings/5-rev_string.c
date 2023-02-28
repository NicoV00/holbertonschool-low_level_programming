#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 **/
void rev_string(char *s)
{
	int x, y;
	char intercb;

	for (x = 0; s[x] != '\0'; x++)
		;
	for (y = 0; y < x / 2; y++)

	{
		intercb = s[y];
		s[y] = s[x - 1 - y];
		s[x - 1 - y] = intercb;
	}
}
