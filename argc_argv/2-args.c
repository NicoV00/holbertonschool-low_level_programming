#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
 * main -  prints arguments
 * @argc: number of arguments
 * @argv: array of argumnets
 * Return: 0
 *
 */

int main(int argc, char *argv[])
{
	int x = 0;
	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
