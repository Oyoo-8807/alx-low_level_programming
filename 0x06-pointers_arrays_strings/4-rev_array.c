#include "main.h"

/**
 * reverse_array - Reverse content of array of integers
 * @a: reversed array of integers
 * @n: elements in array
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n -1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 index] = a[index];
		a[index] = tmp;
	}
}
