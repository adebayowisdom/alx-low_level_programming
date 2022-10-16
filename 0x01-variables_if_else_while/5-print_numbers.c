#include <stdio.h>
/**
 * main - print numbers 0 - 9 
 * Return: Always 0
 */
int main(void)
{
	char nb;

	for (nb = 0; nb < 10; nb++)
		putchar(nb);

	putchar('\n');
	return (0);
}
