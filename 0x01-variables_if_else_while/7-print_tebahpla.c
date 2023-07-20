#include <stdio.h>

/**
 * main - Entry point
 * Return: Always returm 0 (Success)
 */

int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar(x);
	return (0);
}
