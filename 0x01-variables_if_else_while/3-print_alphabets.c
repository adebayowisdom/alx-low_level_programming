#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -prints alpha in lower case
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; lc <= 'z'; ch++)

		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
