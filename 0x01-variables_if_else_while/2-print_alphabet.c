#include <stdio.h>

/**
*main - Return Entry Point
*Return: Always return 0 (success)
*/

int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return(0);
}
