#include "main.h"
/**
 * more_numbers - function that prints out more numbers
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int i;
	int k;

	for (k = 0; k < 10; k++)
	{
		i = 0;
		while (i <= 14)
		{
		if (i >= 10)
		{
			_putchar(i / 10 + '0');
		}
		_putchar(i % 10 + '0');
		i++;
		}
	_putchar('\n');
	}
}
