#include "variadic_functions.h"

/**
 *  sum_them_all - Sum all params
 *
 *  @n: const unsigned int
 *
 *  Return: int sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int total = 0;
	unsigned int i;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		total += va_arg(args, unsigned int);
	}

	va_end(args);

	return (total);
}
