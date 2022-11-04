#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - function that returns the natural square root of a number
 * @num: the number
 * @root: the root
 * Return: if number has natural square root - the square root
 *	if number does not have natural square root -1
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}
