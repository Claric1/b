#include "main.h"
#include <stdio.h>
/**
 * print_rev - function that prints a string, in reverse
 * @s: string
 * Return: always success
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	for (a -= 1; a >= 0; a--)
	{
		putchar(s[a]);
	}
	putchar('\n');
}
