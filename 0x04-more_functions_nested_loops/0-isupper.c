#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if character is upper case
 * @c: character to be printed
 * Return: Always 0
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
