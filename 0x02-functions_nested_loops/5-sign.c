#include "main.h"
/**
 * print_sign - prints sign of a number
 * @n: the character printed
 * Return: 1 if number is greater than zero, 0 if equal to zero
 * -1 if less than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
