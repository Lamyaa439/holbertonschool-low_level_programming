#include <stdio.h>
/**
 * main - Prints all hexadecimal digits in lowercase.
 *
 * Return: Always 0.
 */

int main(void)
{
	char c;
	char n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
