#include "lists.h"

/**
 * dlistint_len - length of linked list
 * @h: head
 * Return: size_t value
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	int x = 0;

	tmp = h;
	while (tmp != NULL)
	{
		x++;
		tmp = tmp->next;
	}
	return (x);
}
