#include <stdio.h>
/**
 * main -print alphabet in lowercase except for q and e
 * Return: 0
 */

int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != e && low != q)
		putchar(low);
	}
	putchar('\n');
	return (0);
}
