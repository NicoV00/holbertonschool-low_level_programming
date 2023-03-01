#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int x = 0, i = 0;

	while (str[x])
	{
		i++;
		x++;
	}
	for (x = 0; x < i; x++)
	{
		if (i % 2 == 0 && x >= i / 2)
			_putchar(str[x]);
		else if (x - 1 >= i / 2)
			_putchar(str[x]);
	}
	_putchar('\n');
}
