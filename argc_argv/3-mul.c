#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
 * main - prints
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 *
 */

int main(__attribute__((unused))int argc, char *argv[])
{
	int x1, x2, ans;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	x1 = atoi(argv[1]);
	x2 = atoi(argv[2]);
	
	ans = x1 * x2;
	printf("%d\n", ans);
	return (0);
}
