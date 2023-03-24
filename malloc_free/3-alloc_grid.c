#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - pointer to a 2 dimensional array
 * @width: width
 * @height: height of
 * Return: pointer of new grid
 */

int **alloc_grid(int width, int height)
{
	int i, x, **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = (int **)malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)

	{
		a[i] = (int *)malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (x = 0; x < i; x++)
			{
				free(a[x]);
			}
			free(a);
		}
	}
	
	for (i = 0; i < height; i++)
		for (x = 0; x < width; x++)
			a[i][x] = 0;
	
	return (a);
}
