#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_sign - printea alphabet
 *
 * @n
 *
 * Return: 1 and prints +, 0 prints 0, -1 prints -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (0);
	}
}
