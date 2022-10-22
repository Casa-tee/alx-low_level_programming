#include "main.h"
#include <stdio.h>

/**
 * print_line - draw a straight line in the terminal using '_'
 * @n: the number of '_' to be printed
*/
void print_line(int n)
{
	int lin;

	if (n > 10)
	{
		for (lin = 0; lin < n; lin++)
			_putchar('_');
	}

	_putchar('\n');
}
