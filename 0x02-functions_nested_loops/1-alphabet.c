#include "main.h"

/**
 * print_alphabet - print out alphabets
 *
 * Return: void
 */

void  print_alphabet(void)
{
	char alphabets;

	alphabets = 'a';

	while (alphabets <= 'z')
	{
		_putchar(alphabets);
		alphabets++;
	}

	_putchar('\n');
}
