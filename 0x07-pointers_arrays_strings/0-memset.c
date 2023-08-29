#include "main.h"
/**
 * *_memset - function that fills memory with a constant byte
 * @n: bytes to be filled
 * @s: mamory area
 * @b: the constant byte
 * @Return: return to the pointer location
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int r;

for (r = 0; r < n; r++)
{
	s[r] = b;
}
return (s);
}
