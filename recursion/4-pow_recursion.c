#include "main.h"

/**
 * _pow_recursion -  value of x raised to the power of y
 * @x: int going to be powered
 * @y: int that x is going to be powered with
 * Return: integer value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
