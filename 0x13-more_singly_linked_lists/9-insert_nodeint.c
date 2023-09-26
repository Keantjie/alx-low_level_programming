#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *l;
	listint_t *k = *head;

	l = malloc(sizeof(listint_t));
	if (!l || !head)
		return (NULL);

	l->n = n;
	l->next = NULL;

	if (idx == 0)
	{
		l->next = *head;
		*head = l;
		return (l);
	}

	for (i = 0; k && i < idx; i++)
	{
		if (i == idx - 1)
		{
			l->next = k->next;
			k->next = l;
			return (l);
		}
		else
			k = k->next;
	}

	return (NULL);
}
