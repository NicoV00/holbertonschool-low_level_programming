#include "main.h"
/**
 * more_numbers - prints 0 to 14
 * Return: Always 0.
 */
void more_numbers(void)
{
	char *num = "01234567891011121314";
	int letra;
	int cont;

	for (cont = 0; cont <= 9; cont++)
	{
		for (letra = 0; letra <= 19; letra++)
		{
			putchar(num[letra]);
		}
		putchar('\n');
	}
}
