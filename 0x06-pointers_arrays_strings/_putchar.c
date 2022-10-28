#include <unisted.h>

/**_putchar - prints the character c
 * @c: character to be printed
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
