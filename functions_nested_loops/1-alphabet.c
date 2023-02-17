#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - function that prints the alphabet, lowercase
 * You can only use _putchar twice in your code
 * Return: nothing.
 */

void print_alphabet(void)
{	int i;
for (i = 97; i < 123; i++)
putchar(i);

putchar(10);
}
