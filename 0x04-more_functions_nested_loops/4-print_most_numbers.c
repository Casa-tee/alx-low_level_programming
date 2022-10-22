#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints numbers from 0 to 9
 * do not print 2 and 4
 * Return: Always 0
*/
void print_most_numbers(void)
{
	int y = 0;

	while (y < 10)
	{
		if (y != 2 && y != 4)
			_putchar(y + '0');

		y++;
	}
	_putchar('\n');
}
