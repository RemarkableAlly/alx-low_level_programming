#include "main.h"

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 *
 * @s: char pointer
 *
 * @accept: char pointer
 *
 * Return: string
 */

char *_strpbrk(char *s, char *accept)
{
	int xString;

	while (*s != '\0')
	{
		xString = 0;

		while (accept[xString] != '\0')
		{
			if (*s == accept[xString])
			{
				return(s);
			}
			xString++;
		}
		s++;
	}
	return(0);
}
