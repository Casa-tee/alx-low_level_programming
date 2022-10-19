#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 *
 * Return: 1 if the character is a letter, 0 if otherwise
*/
int _isalpha(int c)
{
	int c;

	if ((c => 'a' && c =< 'z') || (c => 'A' && c =< 'Z'))
		return (1);
	else
		return (0);
}
