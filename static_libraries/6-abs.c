#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computes the absolute value
 * @x: input number
 * Return: int
 */
int _abs(int x)
{
	if (x < 0)
	{
		x = x * (-1);
		return (x);
	}
	else
		return (x);
}
