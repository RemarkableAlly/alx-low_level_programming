#include "main.h"

/**
 * print_alphabet_x10 - print out 10 lines of the alphabets
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char alphabets;
	int x;
	x = 1;

	while (x <= 10)
	{
		for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		{
			_putchar(alphabets);
		}

		_putchar('\n');
		x++;
	}
}
