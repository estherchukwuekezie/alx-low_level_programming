#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9
 *
 * Reture: Always 0 (Success)
 */
int main(void)
{
	int d = 48;

	while (d < 58)
	{
		putchar(d);
		d++;
	}
	putchar('\n');

	return (0);
}
