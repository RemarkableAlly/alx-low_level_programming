#include "main.h"

/**
 * _islower - Return 1 if lowercase and return 0 if otherwise
 *
 * @C: Character to be checked
 * 
 *  Return: Always return 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
