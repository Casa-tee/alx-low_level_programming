#include <stdio.h>
#include "main.h"

/**
 * main - prints all argument it receives
 * @argc: counts argument
 * @argv: the argument
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count = 0;

	if (argc > 0)
	{
		/*WHILE - Print each arguments*/
		while (count < argc)
			printf("%s\n", argv[count]);
	}
	return (0);
}
