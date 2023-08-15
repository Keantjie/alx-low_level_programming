#include <stdio.h>
/**
 * main - print 50 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	long int i, j, sum, counter;

	i = 0;
	j = 1;
	for (counter = 0; counter < 50; counter++)
	{
		sum = i + j;
		i = j;
		j = sum;
		if (counter != 49)
			printf("%ld, ", sum);
		else
			printf("%ld\n", sum);
	}
}
