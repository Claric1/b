#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 -function that prints 10 times the alphabet, in lowercase
 * Return: Always Succes
 */

void print_alphabet_x10(void)
{
	char j;
	int i = 0;

	while (i <= 9)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
		putchar('\n');
		i++;
	}
}
