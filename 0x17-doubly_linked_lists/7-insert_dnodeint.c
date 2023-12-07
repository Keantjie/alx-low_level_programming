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
	dlistint_t *current_n;
	dlistint_t *head;
	unsigned int i;

	current_n = NULL;
	if (idx == 0)
		current_n = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					current_n = add_dnodeint_end(h, n);
				else
				{
					current_n = malloc(sizeof(dlistint_t));
					if (current_n != NULL)
					{
						current_n->n = n;
						current_n->next = head->next;
						current_n->prev = head;
						head->next->prev = current_n;
						head->next = current_n;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}

	return (current_n);
}
