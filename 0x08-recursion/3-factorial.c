#include "main.h"
/**
 * factorial - function that returns a factorial of a number
 * @n: the input integer
 * Return: the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
