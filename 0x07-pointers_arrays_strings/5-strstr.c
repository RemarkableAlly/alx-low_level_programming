#include "main.h"

/**
 * _strstr - Function that locates a substring.
 *
 * @needle: char pointer
 * @haystack: char pointer
 *
 * Return: s
 */

char *_strstr(char *haystack, char *needle)
{
    int xString = 0;

    while (haystack[0])
    {
        while (haystack[xString] == needle[xString])
            xString++;

        if (!needle[xString])
            return (haystack);

        haystack++;
        xString = 0;
    }
    return (0);
}
