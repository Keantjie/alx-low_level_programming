#include <stdio.h>
/**
 * main - Prints numbers of base 16
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;
	int num;

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');
	return (0);
}
