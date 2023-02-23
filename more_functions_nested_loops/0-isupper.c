#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character.
 * @a: ascii
 * Return: 1: c is uppercase. 0: is lowercase.
 */
int _isupper(int a)
{

	if ((a < 91) && (a > 64))
		return (1);
	return (0);
}
