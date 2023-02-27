#include <stdio.h>
/**
 * main -print alphabet in reverse
 * Return: 0
 */

int main(void)
{
	int b;

	for (b = 'z'; b >= 'a'; b--)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
