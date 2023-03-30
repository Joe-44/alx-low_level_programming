#include "main.h"

/**
 * _strncpy - Copies a string
 *
 * @dest: Destination char array to copy to
 * @src: Source char array to copy from
 * @n: Maximum number of characters to copy
 *
 * Return: Pointer to the destination char array
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    return dest;
}
