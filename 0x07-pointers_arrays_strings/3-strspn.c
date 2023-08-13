#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: segment to return bytes from
 * @accept: the bytes to include
 *
 * Return: the number of bytes in the initial segment of @s which consist only
 * of bytes from @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int x = 0;
	int y;

	while (s[x] != '\0')
	{
		y = 0;

		while (accept[y] != '\0')
		{
			if (s[x] == accept[y])
			{
				break;
			}
			y++;
		}


		if (accept[y] == '\0')
		{
			break;
		}
		x++;
	}
	return(x);
}
