#include "main.h"
/**
 * reverse_array - function that reverses an array
 * @a: array to be reversed
 * @n: number of elements in array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, k, j;

	k = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[k];
		a[k--] = j;
	}
}
