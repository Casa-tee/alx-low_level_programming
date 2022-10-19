#include "main.h"
/**
 * print_alphabet - print the alphabet in lowercase
 *
 * Return: 0
*/
void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		_putchar(la);

	_putchar('\n');

	return (0);
}
