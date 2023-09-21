#include "lists.h"
/**
 * add_node - function that adds a node to the head
 * @head: pointer to a list_t pointer
 * @str: pointer to a string
 *
 * Return: pointer to new head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *list;
	int k = 0;

	list = malloc(sizeof(list_t));
	if (list == NULL)
		return (NULL);
	while (str[k])
		k++;
	list->len = k;
	list->str = strdup(str);
	list->next = *head;
	*head = list;
	return (list);
}
