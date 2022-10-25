#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 * @a: character to be swapped
 * @b: second character
 * Return: void
*/
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = *x;
}
