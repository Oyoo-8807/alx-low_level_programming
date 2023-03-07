#include "main.h"
/**
 * _strstr - entry point 
 * @needle: input
 * @haystack: output
 * @\0: null bytes
 * Return: always 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*s)
	{
		for (i = 0; haystack[i]; i++)
		{
		if (*s == haystack[i])
		return (s);
		}
	s++;
	}
	return ('\0');
}


