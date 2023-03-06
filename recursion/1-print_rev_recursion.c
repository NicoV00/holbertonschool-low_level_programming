#include "main.h"

/**
 * _puts_recursion - prints a string in reverse
 * @s: string
 * Description: printeo una string al reves
 * Return: 0.
 **/

void _print_rev_recursion(char *s)
{

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
