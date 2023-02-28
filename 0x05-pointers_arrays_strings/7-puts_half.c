#include "main.h"
#include <stdio.h>
/**
 * puts_half - function that prints half of a string
 * @str: character
 * Return: Always Success
 */

void puts_half(char *str)
{
	int i = 0;
	int a;

	while (*(str + i) != '\0')
	{
		i++;
	}
	if (i % 2 == 1)
	{
		a = (i - 1) / 2;
			a += 1;
	}
	else
	{
		a = i / 2;
	}
	for (; a < i; a++)
	{
		putchar(*(str + a));
	}
	putchar('\n');
}
