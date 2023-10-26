#include "main.h"
/**
 * print_binary - prints binary
 * @n: input number to be converted to binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int another = n;
	int relocate = 0;

	while ((another >>= 1) > 0)
		relocate++;
	while (relocate >= 0)
		_putchar((n >> relocate--) & 1 ? '1' : '0');
}
