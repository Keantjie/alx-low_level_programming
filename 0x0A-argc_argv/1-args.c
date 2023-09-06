#include "main.h"
#include <stdio.h>
/**
 * main - print number of arguements
 * @argc: number of arguements
 * @argv: aeeay of arguements
 *
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
