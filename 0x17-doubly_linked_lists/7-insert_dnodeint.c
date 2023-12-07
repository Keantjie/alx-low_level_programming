#include "lists.h"
/**
 * insert_dnodeint_at_index - A function that inserts a node
 * @h: The double pointer to the head.
 * @idx: The index to insert new node at.
 * @n: The data to add to new node.
 * Return: A pointer
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_n = NULL, *sub = NULL;
	unsigned int k = 0;

	current_n = malloc(sizeof(dlistint_t));
	if (!current_n)
		return (NULL);
	current_n->next = NULL;
	current_n->prev = NULL;
	current_n->n = n;
	if (!h || !(*h))
		*h = current_n;
	else
	{
		sub = *h;
		while (idx != k++ && sub->next)
			sub = sub->next;
		if (sub->next)
			current_n->prev = sub->prev;
		else
			current_n->prev = sub;
		if (idx == k)
			sub->next = current_n, current_n->prev = sub;
		else if (idx == k - 1)
		{
			if (sub->prev)
				sub->prev->next = current_n;
			else
				*h = current_n;
			sub->prev = current_n;
			current_n->next = sub;
		}
		else
		{
			free(current_n);
			return (NULL);
		}
	}
	return (current_n);
}
