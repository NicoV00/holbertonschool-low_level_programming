#include "main.h"

/**
 * _funcionSQR - calcula SRQ
 * @n: int
 * @x: int
 * Return: int
 */

int  _funcionSQR(int n, int x)
{
	if (x * x == n)
		return (x);

	if (x * x > n)
		return (-1);

	return (_funcionSQR(n, x + 1));
}

/**
 * _sqrt_recursion -  returns natural square root of a number
 *
 * @n: int
 *
 * Return: int
 */

int  _sqrt_recursion(int n)
{
	return (_funcionSQR(n, 0));
}
