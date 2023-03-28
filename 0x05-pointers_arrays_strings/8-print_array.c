#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: an input array
 * @n: an input integer
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		if (a[i] != '\0';)
		{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
		}
		else 
			printf("/0")
	}
	putchar('\n');
}
