#include "main.h"
/**
 * _strcmp - Compares pointers to two strings
 * @s1: Pointer for the first string be compared
 * @s2: Pointer for the second string be compared
 *
 * Return: If str1 < str2, the negative difference of the first matched char
 *   		If strl == str2, 0.
 * 	 	If str1 > str2, the positive difference of the first unmatched char
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
