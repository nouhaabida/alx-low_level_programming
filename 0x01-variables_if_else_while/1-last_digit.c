#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the last digit.
 * Return: Always 0
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() % 10;
	m = n;
	printf("Random number: %d\n", n);
	if (m > 5)
	{
	printf("The last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
	printf("The last digit of %d is %d and is 0\n", n, m);
	}
	else
	{
	printf("The last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	return (0);
}
