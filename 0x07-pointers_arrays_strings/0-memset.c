#include "main.h"
#include <stdio.h>
/**
 * _memset - function that fills memory with a constant byte
 * @s: first character
 * @b: second character
 * @n: unsigned integer
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		*(s + i) = b;
		n--;
	}
	return (s);
}
