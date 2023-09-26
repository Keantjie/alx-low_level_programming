#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *l;
	listint_t *k = *head;

	l = malloc(sizeof(listint_t));
	if (!l)
		return (NULL);

	l->n = n;
	l->next = NULL;

	if (*head == NULL)
	{
		*head = l;
		return (l);
	}

	while (k->next)
		k = k->next;

	k->next = l;

	return (l);
}
