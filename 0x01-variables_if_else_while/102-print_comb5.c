#include <stdio.h>
/**
 * main -program that prints all possible combinations of two two-digit numbers
 * Return: 0
 */

int main(void)
{
	int i, a;

	for (i = 0; i <= 98; i++)
	{
		for (a = i + 1; a <= 99; a++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			if (i == 98 && a == 99)
			continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
