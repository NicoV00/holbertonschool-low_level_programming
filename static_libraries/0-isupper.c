#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character.
 * @c: ascii
 * Return: 1: c is uppercase. 0: is lowercase.
 */
int _isupper(int c)
{

	if ((c < 91) && (c > 64))
		return (1);
	return (0);
}
