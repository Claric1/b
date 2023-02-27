#include "main.h"
#include <stdio.h>
/**
 * _puts - function that prints a string
 * @str: string
 * Return: always success
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
