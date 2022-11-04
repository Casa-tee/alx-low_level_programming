#incude "main.h"

int _isitprime(int n, int i);
int is_prime_number(int n);

/**
 * _isitprime - looks for prime
 * @n: number to be checked
 * @i: the second number
 * Return: if the number is prime 1, otherwise 0
 */
int _isitprime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (n % i == 0)
			return (0);
		else
			return (_isitprime(n, i - 1));
	}
}

/**
 * is_prime_number - function that checks for prime numbers
 * @n: the number in check
 * Return: if number is prime 1, otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n % 2 == 0)
		return (0);
	else
		return (_isitprime(n, n / 2));
}
