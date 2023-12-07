#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_h;
	dlistint_t *sub;
	unsigned int k;

	current_h = *head;

	if (current_h != NULL)
		while (current_h->prev != NULL)
			current_h = current_h->prev;

	k = 0;

	while (current_h != NULL)
	{
		if (k == index)
		{
			if (k == 0)
			{
				*head = current_h->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				sub->next = current_h->next;

				if (current_h->next != NULL)
					current_h->next->prev = sub;
			}

			free(current_h);
			return (1);
		}
		sub = current_h;
		current_h = current_h->next;
		k++;
	}

	return (-1);
}
