#include "main.h"
int _prime(int n, int m);
/**
 * is_prime_number - function that prints the prime number of integer
 * @n: number to evaluate
 *
 * Return: 1 if prime number or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}
/**
 * _prime - calculates the actual prime
 * @n: number to evaluate
 * @m: the result to be divided
 * Return: 1 if divisable or else 0
 */
int _prime(int n, int m)
{
if (m == 1)
return (1);
if (n % m == 0 && m > 0)
return (0);
return (_prime(n, m - 1));
}
