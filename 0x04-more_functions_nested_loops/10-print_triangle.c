#include "mian.h"

/**
 * print_triangle - prints a rectangle
 * @n: size of the traingle
 */
void print_traingle(int n)
{
	int n, tri;

	if (n > 0)
	{
		for (h = 1; h <= n; h++)
		{
			for (tri = n - h; tri > 0;  tri--)
				_putchar(' ');
			for (tri = 0; tr < h; tri++)
				_putchar('#');
			if (h == n)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
			

