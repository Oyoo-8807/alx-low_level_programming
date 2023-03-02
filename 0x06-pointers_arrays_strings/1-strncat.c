#include "main.h"

/**
 * _strncat - Concatenates two strings used at inputted bytes from src
 * @dest: A pointer string to be concatenated upon
 * @src: The appended to @dest
 * @n: Number of bytes from src
 *
 * Return: A pointer to the string dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int index = 0, dest_len = 0;

  	while (dest[index++])
                dest_len++;
  	for (index = 0; src[index] && index < n; index++)
              	dest[dest_len++] = src[index];
  	return (dest);
}
