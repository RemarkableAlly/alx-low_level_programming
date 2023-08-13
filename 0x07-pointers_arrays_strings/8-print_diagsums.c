#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Calculate and print the sum of diagonal values
 *
 * @a: Pointer to array
 * @size: Size of the square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int row, sum_main = 0, sum_secondary = 0;

	for (row = 0; row < size; row++)
	{
		sum_main += a[row * size + row];
		sum_secondary += a[(row + 1) * size - (row + 1)];
	}

	printf("%d, %d\n", sum_main, sum_secondary);
}
