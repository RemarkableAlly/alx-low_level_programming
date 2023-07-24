#include "main.h"

/**
 * print_last_digit - Prints out the last digit of a value
 * @x: the value checked
 * Return: Always return the last digit of a value
 */

int print_last_digit(int x)
{
	int lastDigit;

	lastDigit = x % 10;

	if (lastDigit < 0)
	{
		lastDigit = lastDigit * -1;
	}

	_putchar(lastDigit + '0');
	return (lastDigit);
}
