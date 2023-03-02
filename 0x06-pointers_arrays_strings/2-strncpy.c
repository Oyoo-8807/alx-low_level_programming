#include "main.h"

/**
 * _strncpy - Copies at most inputted number of bytes from string src into dest
 * @dest: Buffer storing the string to copy
 * @src: The source string
 * @n: Number of bytes
 *
 * Return: A pointer to the string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
        int index = 0, src_len = 0;

        while (src[index++])
                src_len++;

        for (index = 0; src[index] && index < n; index++)
                dest[index] = src[index];

	for (index = 0; src_len; index < n; index++)
                dest[index] = '\0';

        return (dest);
}
