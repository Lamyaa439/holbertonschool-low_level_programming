#include "main.h"
/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: pointer
 * @size: int
 *
 * Return: Void
 **/
void print_diagsums(int *a, int size)
{
	int i, j, sum_1 = 0, sum_2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_1 += a[(size + 1) * i];
	}
	for (j = 0; j < size; j++)
	{
		sum_2 += a[(size - 1) * (j + 1)];
	}
	printf("%d, %d\n", sum_1, sum_2);
}
