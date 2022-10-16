#include <stdio.h>
/**
 * main - print lower case in reverse
 * Return: Always 0
 */
int main(void)
{
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
