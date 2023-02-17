#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_sign - printea alphabet
 *
 * @n: number
 *
 * Description: sort out a number in positive, negative or 0
 *
 * Return: 1 and prints +, 0 prints 0, -1 prints -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		putchar(45);
		return (0);
	}
	else
	{
		putchar(48;
		return (1);	}
}
