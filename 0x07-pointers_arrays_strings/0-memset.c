#include "main.h"
#include <stddef.h>

/**
 * _memset - fills the first n bytes of the memory
 * @s: memory to be filled
 * @b: the constant byte
 * @n: number of bytes to be filled
 * Return: a pointer to the memory area s
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
