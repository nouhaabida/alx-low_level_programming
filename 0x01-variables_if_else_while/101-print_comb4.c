#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* Description: Print all unique three-digit combinations from '012' to '789'
* Return: Always 0
*/
int main(void)
	{
	int d, p, q;

	for (d = '0'; d <= '7'; d++)
	{
	for (p = d + 1; p <= '8'; p++)
	{
	for (q = p + 1; q <= '9'; q++)
	{
	putchar(d);
	putchar(p);
	putchar(q);
	if (d == '7' && p == '8' && q == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
