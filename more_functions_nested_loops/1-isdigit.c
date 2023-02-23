#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Checks for a digit
 * @c: int
 * Return: 1: c is a digit. 0: c is not a digit
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	
	return (0);
}
