#include <stdio.h>
void main_constructor(void) __attribute__((constructor));
/**
 * main_constructor - function executed before main()
 * Return: void
 */
void main_constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
