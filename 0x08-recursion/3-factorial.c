#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 * @n: the given number
 * Return: if n > 0 - the factorial of n
 *	otherwise -1 to inddicate an error
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);
	return (result);
}
