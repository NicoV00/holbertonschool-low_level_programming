#include "main.h"

/*
 * get_bit - gets bit a indez
 * @n: number 
 * @index: index
 * Return: value of indez or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	return (n >> index & 1);
}
