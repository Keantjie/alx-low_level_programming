#include "lists.h"
/**
 * add_node_end - A function that adds a node to the end of linked list
 * @head: pointer to a list_t pointer that points to the head struct
 * @str: string to add as node
 * Return: pointer to new element of list, NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *list;
	unsigned int k = 0;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	while (str[k])
		k++;

	n_node->len = k;
	n_node->str = strdup(str);
	if (*head == NULL)
	{
		n_node->next = *head;
		*head = n_node;
	}
	else
	{
		n_node->next = NULL;
		list = *head;
		while (list->next)
			list = list->next;
		list->next = n_node;
	}
	return (n_node);
}
