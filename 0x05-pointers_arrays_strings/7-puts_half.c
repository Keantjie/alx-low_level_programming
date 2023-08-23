#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int k, n, i;

	k = 0;
	while (str[k] != '\0')
	{
		k++;
	}
	if (k % 2 == 0)
	{
		for (i = k / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (k % 2)
	{
		for (n = (k - 1) / 2; n < k - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
