#include "lists.h"
/**
 * add_dnodeint_end - A function that adds a node to the end
 * @head: The double pointer to the head.
 * @n: The data to add to new node.
 * Return: pointer to new element, NULL on failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
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
		while (sub->next)
			sub = sub->next;

		current_n->prev = sub;
		sub->next = current_n;

		return (current_n);
	}
	return (NULL);
}
