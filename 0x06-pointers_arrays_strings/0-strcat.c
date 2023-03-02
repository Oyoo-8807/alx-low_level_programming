#include "main.h"

/**
 * strcat - Concatenates he string pointed by @src
 *		-to end of string pointed by @dest.
 * @dest: A pointer string to be concatenated upon
 * @src: The appended to @dest
 *
 * Return: destination string @dest
 */

char *_strcat(char *dest, char *src)

{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
