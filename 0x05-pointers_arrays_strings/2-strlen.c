#include "main.h"
#include <stdio.h>

/**
 * _strlen - return the len of a string
 * @s: a pointer starting
 * Return: the len of a string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
