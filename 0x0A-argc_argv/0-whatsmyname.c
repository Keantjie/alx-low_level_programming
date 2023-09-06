#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: te number of arguements
 * @argv: array of arguements
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
