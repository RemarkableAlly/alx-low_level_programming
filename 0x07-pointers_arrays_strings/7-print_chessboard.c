#include "main.h"

/**
 * print_chessboard - prints 2D array of chessboard
 * @a: chessboard array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
    int row = 0, col = 0;

    while (row < 8)
    {
        col = 0;
        while (col < 8)
        {
            _putchar(a[row][col]);
            col++;
        }
        _putchar('\n');
        row++;
    }
}
