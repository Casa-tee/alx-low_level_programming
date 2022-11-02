#include "main.h"

/**
 * _strchr - locates character in the string
 * @s: input
 * @c: input
 * Return: if c is found - a pointer to the first occurence, otherwise 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
