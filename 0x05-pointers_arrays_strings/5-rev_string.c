#include "main.h"
#include <stdio.h>
/**
 * rev_string - function that reverses a string
 * @s: character
 * Return: always success
 */

void rev_string(char *s)
{
	int l = 0, i = 0;
	char exp;

	while (s[i++])
		l++;
	for (i = l - 1; i >= l / 2; i--)
	{
		exp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = exp;
	}
}
