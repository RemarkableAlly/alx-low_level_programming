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
		int tens = x / 10;
		int ones = x % 10;

		if (tens < ones)
		{
			putchar('0' + tens);
			putchar('0' + ones);

			if (x < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}

		x++;
	}
	putchar('\n');
	return (0);
}
