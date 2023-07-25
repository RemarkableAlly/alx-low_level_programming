#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number to print from
 * Return: Always return 0
 */


void print_to_98(int n)
{
	if (n <= 98) {
        while (n <= 98) {
            /* Print the number */
            int number = n;
            int divisor = 1;

            /* Find the largest divisor to get the digits of the number */
            while (number >= 10 || number <= -10) {
                divisor *= 10;
                number /= 10;
            }

            number = n;

            /* Handle negative numbers */
            if (n < 0) {
                _putchar('-');
                number = -number;
            }

            /* Print each digit of the number */
            while (divisor >= 1) {
                int digit = number / divisor;
                _putchar('0' + digit);
                number %= divisor;
                divisor /= 10;
            }

            /* Add comma and space if not the last number */
            if (n < 98) {
                _putchar(',');
                _putchar(' ');
            }

            n++;
        }
    }

    _putchar('\n');
}
