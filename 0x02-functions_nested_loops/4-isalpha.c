#include "main.h"

/**
 * _isalpha - Check if the charater given is a alphabet
 * c: The character to be checked
 * Return: Always return 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
