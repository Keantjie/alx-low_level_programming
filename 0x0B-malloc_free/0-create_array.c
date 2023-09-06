#include <stdlib.h>
#include "main.h"
/**
 * *create_array - creates an array of chars
 * @size: size of array to create
 * @c: char to form
 * Return: pointer to array or null
 */
char *create_array(unsigned int size, char c)
{
		char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}

