#include <stdio.h>

/**
 * main - Entry point
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int x;
	int y;

	/* print digits from 0 to 9 to make base 16 */
	for (x = 0; x <= 9; x++)
	{
		putchar('0' + x);
	}

	/* print alphabets from a to f in base 16 */
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
