#include <stdio.h>

/**
 * main - Entry point
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int x = 1;

	while (x < 90)
	{
		putchar('0' + (x / 10));
		putchar('0' + (x % 10));
		
		if (x < 89)
		{
			putchar(',');
			putchar(' ');
		}

		x++;
	}
	putchar('\n');
	return (0);
}
