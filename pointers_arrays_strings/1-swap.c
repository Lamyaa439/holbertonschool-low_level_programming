#include "main.h"

/**
* swap_int -  swaps the values of two integers.
* @a: integers to swaps.
* @b: integers to swaps.
*
* Return: void
*
*/

void swap_int(int *a, int *b)
{
	int m, n;

	m = *a;
	n = *b;
	*a = n;
	*b = m;
}
