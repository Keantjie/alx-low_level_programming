#include "main.h"
#include <stdio.h>
/**
 * print_line - function that prints a line
 * @n: the number of characters
 *
 * Return: Void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
