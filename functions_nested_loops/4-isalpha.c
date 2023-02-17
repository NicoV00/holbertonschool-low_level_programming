#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * _isalpha - checks whether a character is an alphabet or not
 *
 * @c: decimal
 *
 * Return: 1 if c is a letter, lowercase or uppercase 0 otherwise
 */
int _isalpha(int c)
{

	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	return (0);
}
