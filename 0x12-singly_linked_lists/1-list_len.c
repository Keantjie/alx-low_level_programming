#include "lists.h"
/**
 * list_len - function returns number of elements
 * @h: name of the linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int k = 0;
	const list_t *another_h = h;

	for (; another_h; another_h = another_h->next)
		k++;
	return (k);
}
