#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: the number to be computed
 * Return: absolute value of a number or zero
 */

int _abs(int x)
{
	if (x < 0)
	{
		int abs_num;

		abs_num = x * -1;

		return (abs_num);
	}
	return (x);
}
