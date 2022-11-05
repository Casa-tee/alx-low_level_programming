#include <stdio.h>
#include "main.h"

/**
 * main - prints name of program
 * @argc: counts argument
 * @argv: the argument
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
