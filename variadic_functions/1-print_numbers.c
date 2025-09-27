#include <stdio.h>
#include "variadic_functions.h"

/**
 *  print_numbers -  prints numbers sepereated by seperator
 *
 *  @seperator: String beetween numbers
 *
 *  @n: Number of args
 *
 *  Return void
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, unsigned int));

		if (seperator != NULL && i < n - 1)
			printf("%s", seperator);
	}
	putchar('\n');
	va_end(args);
}
