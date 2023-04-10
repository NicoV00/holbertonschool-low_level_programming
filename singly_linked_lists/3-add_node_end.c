#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* add_node_end - adds node at end
 * 
 * @head: head
 * @str: string to add
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *temp = *head;
	
	if (new == NULL)
		return (NULL);
	
	new->str = strdup(str);
	new->len = strlen(str);
	
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (temp->next);
}
