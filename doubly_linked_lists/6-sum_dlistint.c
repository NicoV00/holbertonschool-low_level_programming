#include "lists.h"

/*
 * sum_dlistint - sums up values of linked list
 * @head: head
 * Return: sum of nodes, if it is empty 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		head = head->next;
	}
	return (sum);
}
