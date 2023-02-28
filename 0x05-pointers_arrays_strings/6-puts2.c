#include "main.h"
#include <stdio.h>
/**
 * puts2 - function that prints every other character of a string
 * starting with the first character
 * @str: character
 * Return: always success
 */

void puts2(char *str)
{
	int i;
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	for (i = 0; i < a; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
