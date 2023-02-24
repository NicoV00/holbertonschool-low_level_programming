#include <stdio.h>

/**
 * main - prints nubers 0 to 100
 *
 * Description: FizzBuzz
 *
 * Return: the value of function
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3) == 0)
			printf("Fizz");
		if ((i % 5) == 0)
			printf("Buzz");
		else if ((i % 3) != 0)
			printf("%d", i);
		if (i != 100)
			printf(" ");
		else
			 printf("\n");
	}

	return (0);
}
