#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: string
 * @n: string
 */
void reverse_array(int *a, int n)
{
	int i, x;

	for (i = 0; i < n / 2; i++)
	{
		x = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = x;
	}
}
