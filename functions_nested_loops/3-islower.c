#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * _islower - printea alphabet
 *
 * Description: input check 
 *
 * Return: int
 */
int _islower(int c)
{
	if (c >= 96 && c <= 123)
		return (1);
	else
		return (0);
}
