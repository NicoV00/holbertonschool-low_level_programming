#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Prints the last digit of a number.
 * @x: Number to check
 * Return: int.
 */
int print_last_digit(int x)
{

	x %= 10;

	if (x < 0)
		x *= -1;

	_putchar(x + '0');
	return (x);
}
