#include "main.h"
/**
 * _pow_recursion - function that returns x to the power y
 * @x: the base of the function
 * @y: the exponent
 * Return: the exponential
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
