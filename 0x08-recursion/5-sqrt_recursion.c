#include "main.h"
int _sqrt(int n, int m);
/**
 * _sqrt_recursion - returns the natural square root of number
 * @n: input interger
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt(n, 0));
}
/**
 * _sqrt - square root of number
 * @n: number to calculate square root
 * @m: root value
 * Return: the square root
 */
int _sqrt(int n, int m)
{
if (m * m > n)
return (-1);
if (m * m == n)
return (m);
return (_sqrt(n, m + 1));
}
