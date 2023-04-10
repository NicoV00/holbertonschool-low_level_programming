#include "lists.h"

/**
 * add_dnodeint - adds a new node
 * @head: head
 * @n: integer
 * Return: address of new element, NULL if fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	new = malloc(sizeof(dlistint_t));
	
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}

	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (*head);
}
