#include "lists.h"
/**
 * print_dlistint - prints all the elements
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int add_up;

	add_up = 0;

	if (h == NULL)
		return (add_up);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		add_up++;
		h = h->next;
	}

	return (add_up);
}
