#include "main.h"

/*
 * check - checks if a number is divisible
 * @n: int
 * @x: int
 * Return: int
 */
int check(int n, int x)
{
	if (n == x)
		return (1);
	if (n % x == 0)
		return (0);
	return (check(n, x + 1));
}

/*
 * is_prime_number - check if number is prime
 * @n: int
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check(n, 2));
}
