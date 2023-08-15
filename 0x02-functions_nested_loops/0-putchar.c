#include <stdio.h>

/**
 * main - Prints the word _putchar and a new line
 *
 * Return: Always 0 if successful
 */
int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		putchar(word[i]);
	putchar('\n');
	return (0);
}
