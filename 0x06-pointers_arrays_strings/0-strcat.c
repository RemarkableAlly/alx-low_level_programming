#include "holberton.h"
/**
 * _strcat - concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int lenDest = 0;
	int lenSrc = 0;


	while (*(dest + lenDest) != '\0')
		lenDest++;

	while (*(src + lenSrc) != '\0' && lenDest < 97)
	{
		*(dest + lenDest) = *(src + lenSrc);
		lenDest++;
		lenSrc++;
	}
	*(dest + lenDest) = '\0';
	return (dest);
}
