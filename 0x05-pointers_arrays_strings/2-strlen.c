#include "main.h"

/**
 * _strlen - function to get the length of a string
 * @s: string pointer to passed to this function
 * Return: void
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	i++;

	return (i);
}
