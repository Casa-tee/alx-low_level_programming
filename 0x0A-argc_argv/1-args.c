#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed
 * @argc: counts argument
 * @argv: the argument
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
