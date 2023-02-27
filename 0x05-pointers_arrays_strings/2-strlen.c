#include "main.h"
#include <stdio.h>
/**
 * _strlen - function that returns the length of a string
 * @s: character
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
