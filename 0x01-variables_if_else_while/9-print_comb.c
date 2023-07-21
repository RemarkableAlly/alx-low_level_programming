#include <stdio.h>

/**
 * main - Entry point
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int x;

	while (x < 10)
	{
		putchar('0' + x);
		putchar(',');
		x++;
	}
	putchar(x);
	return (0);
}
