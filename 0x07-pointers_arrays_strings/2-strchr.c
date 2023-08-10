#include "main.h"
#include <stdio.h>

/**
 * _strchr - prints from the first occurrence of a char.
 * @s: source string
 * @c: tested char
 *
 * Return: new string.
 */

char *_strchr(char *s, char c)
{
	if (s == NULL)
	{
		return NULL;
	}

	while (*s != '\0' && *s != c)
	{
		s++;
	}

	if (*s == c)
	{
		return(s);
	}

	return(NULL);
}
