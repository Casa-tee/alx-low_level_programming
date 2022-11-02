#include "main.h"
#include <string.h>

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: if c is found - a pointer to the first occurence
 * 	if c is not found - NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s[i]);
	}
	return ('\0');
}
