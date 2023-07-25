#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: times table for the value nine
 */

void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;

			_putchar('0' + z / 10);
			_putchar(',');
			_putchar(' ');
			_putchar('0' + z % 10);

			if (y < 9)
			{
				_putchar(' ');
			}
		}

		_putchar('$');
		_putchar('\n');
	}
}
