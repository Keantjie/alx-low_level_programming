#include "lists.h"
/**
 * free_list - free linked list
 * @head: beginning of list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *list;

	if (head)
	{
		list = head->next;
		free(head->str);
		free(head);
		head = list;
	}
}
