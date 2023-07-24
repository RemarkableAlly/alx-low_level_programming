#include "main.h"

/**
 *  _islower - check for lowercase characters
 *  @C: Character to be checked
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
