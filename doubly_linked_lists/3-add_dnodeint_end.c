#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: head
 * @n: integer
 * Return: address of new element, NULL if fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}

	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->prev = temp;

	return (new);
}
