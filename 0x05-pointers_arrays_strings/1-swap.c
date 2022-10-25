#include "main.h"
#include <stdio.h>

/**
 * swap_two_int - swaps the values of two integer
 * @b: first pointer
 * @a: second pointer
 */

void swap_int(int *a, int *b)
{
	int constant = *a;
	*b = *a;
	*a = constant;
}

