#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry
 *
 * Return: 0
*/
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	printf("last digit of %d is %d", n, a);
	if (a > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, a);
	}
	else if (a == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, a);
	}
	else if (a < 6 && a !=0)
	{
		printf("and is less than 6 and not 0");
	}
	return (0);
}
