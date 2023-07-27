#include "main.h"

/**
 * print_most_numbers - print num except 2 and 4
 *
 * return: void
 */

void print_most_numbers(void)
{
	char c;
	char x = 2;
	char y = 4;

	for (c = 0; c <= 9; c++)
	{
		if (c == x || c == y)
		{
			continue;
		}
		_putchar('0' + c);
	}
	_putchar('\n');
}
