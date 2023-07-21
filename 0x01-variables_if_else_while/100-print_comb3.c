#include <stdio.h>

/**
 * main - Entry point
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int x = 1;

	while (x < 100)
	{
		putchar('0' + (x / 10));
		putchar('0' + (x % 10));
		
		if (x < 99)
		{
			putchar(',');
			putchar(' ');
		}

		x++;
	}
	putchar('\n');
	return (0);
}
