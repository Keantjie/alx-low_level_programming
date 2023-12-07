#include "lists.h"
/**
 * free_dlistint - frees dlistint_t list
 * @head: head of list
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *sub;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((sub = head) != NULL)
	{
		head = head->next;
		free(sub);
	}
}
