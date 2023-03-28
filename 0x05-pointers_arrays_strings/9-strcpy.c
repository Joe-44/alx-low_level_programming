#include "main.h"
/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{			
	char *aux = dest;
	for (*src)
	{
		*dest++ = *(src + 1)++;
	}
	return (aux);
}
