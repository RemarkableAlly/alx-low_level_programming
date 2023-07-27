#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char input;
	int i;
	int start_str;
	int end_str;

	start_str = 0;
	end_str = 0;

	while (s[start_str] != '\0')
	{
		start_str++;
	}

	start_str = end_str - 1;

	for (i = 0; i < start_str / 2; i++)
	{
		input = s[i];
		s[i] = s[end_str];
		s[end_str--] = input;
	}
}
