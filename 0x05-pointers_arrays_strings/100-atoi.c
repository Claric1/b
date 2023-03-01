#include "main.h"
#include <stdio.h>
/**
 * _atoi - function that convert a string to an integer
 * @s: character
 * Return: 0
 */

int _atoi(char *s)
{
	int a = 0;
	unsigned int in = 0;
	int m = 1;
	int i = 0;

	while (*(s + a))
	{
		if (*(s + a) == 45)
		{
			m *= -1;
		}
		while (*(s + a) >= 48 && *(s + a) <= 57)
		{
		i = 1;
		in = (in * 10) + (*(s + a) - '0');
		a++;
		}
		if (i == 1)
		{
		break;
		}
		a++;
	}
	in *= m;
	return (in);

}
