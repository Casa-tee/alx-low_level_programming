#include "main.h"
#include <stdio.h>

/**
 * _memset - function that fills memory with a constant byte
 * @n: number of bytes to be filled
 * @s: pointer
 * @b: character to be filled
 * Return: memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
