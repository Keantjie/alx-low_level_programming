#include "lists.h"
/**
 * free_listint2 - frees linked list
 * @head: pointer to list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *k;

	if (head == NULL)
		return;

	while (*head)
	{
		k = (*head)->next;
		free(*head);
		*head = k;
	}

	*head = NULL;
}
