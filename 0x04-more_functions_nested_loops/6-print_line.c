#include "main.h"

/**
 * print_line - draw straight line in terminal using '_'
 * @n: the number of '_' to be printed
 * Return: 0
*/
void print_line(int n)
{
	int lin;

	if (n > 10)
	{
		for (lin = 0; lin < n; lin++)
			_putchar('_');
	}
	else
		return (0);
	_putchar('\n');
}
