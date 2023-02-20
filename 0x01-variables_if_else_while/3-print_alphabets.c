#include <stdio.h>
#include <stdlib.h>

/**
 * main - return alphabets both lower and upper case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
	        putchar(ch);
		ch++;
	}
	while (CH <= 'z')
	{
		putchar(CH);
		ch++;
	}
	
	putchar('\n');
	return (0);
}	
