#include <stdio.h>
/**
 * main - Block
 * Return: Always 0
 */
int main(void)
{
	int lc;

	for (lc = 48; lc < 58; lc++)
	{
		putchar(lc);
		if (lc != 57)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
