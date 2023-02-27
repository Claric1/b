#include <stdio.h>
/**
 * main -program that prints numbers of base 16 in lowercase
 * Return: 0
 */

int main(void)
{
	char n, low;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (low = 'a'; low <= 'f'; low++)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
