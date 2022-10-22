#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print from 0 - 14 ten times
 * Return: Always 0
*/
void more_numbers(void)
{
	int num;
	int b;

	for (b = 0; b <= 9; b++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}

		_putchar('\n');
	}
}
