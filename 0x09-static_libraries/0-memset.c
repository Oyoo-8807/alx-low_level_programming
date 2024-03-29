#include "main.h"

/**
 * _memset - fill a block
 * @s: memory to be filled
 * @b: desired value
 * @n: number of bytes
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
