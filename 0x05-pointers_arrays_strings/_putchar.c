#include <uistd.h>
#include "main.h"

/**
 * _putchar - writes the character c
 * @c: the character to print
 * Return: 1 on success else -1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}