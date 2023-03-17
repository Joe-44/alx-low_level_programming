#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char joe;

	for (joe = 'z'; joe >= 'a'; joe--)
	{
		putchar(joe);
	}
	putchar('\n');
	return (0);
}
