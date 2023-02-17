#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * main - print_alphabet_x10
 *
 * multiple times
 *
 * Return: empty
 */

void print_alphabet_x10(void)
{
int i, x;

for (x = 0; x < 10; x++)
{
for (i = 97; i < 123; i++)
putchar(i);

putchar(10);
}
