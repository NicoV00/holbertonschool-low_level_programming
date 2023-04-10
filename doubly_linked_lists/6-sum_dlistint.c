#include "lists.h"

/*
 * sum_dlistint - sums up values of linked list
 * @head: head
 * Return: sum of nodes, if it is empty 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (tmp != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
