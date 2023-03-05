#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - function that prints the alphabet, in lowercase.
 * Return: Always Success
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
