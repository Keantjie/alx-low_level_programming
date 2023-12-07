#include "lists.h"
/**
 * add_dnodeint - A function that adds a node to the head
 * @head: The double pointer to the head
 * @n: The data to add into new node
 * Return: A pointer to new element, or NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current_n = NULL, *sub = NULL;

	current_n = malloc(sizeof(dlistint_t));
	if (!current_n)
	{
		free(current_n);
		return (NULL);
	}

	current_n->next = NULL;
	current_n->prev = NULL;
	current_n->n = n;

	if (!head || !(*head))
	{
		*head = current_n;
		return (current_n);
	}
	else
	{
		sub = *head;
		sub->prev = current_n;
		*head = current_n;
		current_n->next = sub;
		return (current_n);
	}
	return (NULL);
}
