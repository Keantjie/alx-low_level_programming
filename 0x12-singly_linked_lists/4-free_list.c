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

	list = head;
	while (head)
	{
		list = head;
		head = head->next;
		free(list->str);
		free(list);
	}
	free(head);
}
