#include "main.h"
#include <stdio.h>
/**
 * _memcpy - function that copies memory area
 * @dest: first character
 * @src: second character
 * @n: unsigned integer
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (; a < i; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
