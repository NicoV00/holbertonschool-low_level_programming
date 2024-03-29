#include "lists.h"

/*
 * print_list - function that prints all elements of list_t
 * @h: head
 * Description: nothing
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%i] %s", h->len, h->str);
		}
		printf("\n");
		h = h->next;
		x++;
	}
	return (x);
}
