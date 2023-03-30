#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * Return: A pointer to the resulting string
 */
char *_strcat(char *dest, const char *src) {
    char *ptr = dest;
    while (*ptr) {
        ptr++;
    }
    while (*src) {
        *ptr++ = *src++;
    }
    *ptr = '\0';
    return dest;
}
