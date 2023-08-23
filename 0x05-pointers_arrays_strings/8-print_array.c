#include <stdio.h>
#include "main.h"
/**
 * print_array - prints elements of an array integer
 * @a: array to be printed
 * @n: number of elementse to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
