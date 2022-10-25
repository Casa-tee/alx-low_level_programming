#include "main.h"
#include <stdio.h>

/**
 * _strlen - to return the length of a string
 * @s: the character to be printed
 * Return: length of string
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
