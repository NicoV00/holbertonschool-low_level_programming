#include "main.h"

/**
 * _puts_recursion - prints a string in reverse
 * @s: string
 * Return: 0.
 **/

void _print_rev_recursion(char *s)
{

	if (*s)
	{
		_print_rev_recursion(s);
		_putchar(*s);
	}
}
