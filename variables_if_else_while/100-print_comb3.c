#include <stdio.h>
/**
* main - Prints all hexadecimal digits in lowercase.
*
* Return: Always 0.
*/

int main(void)
{
	int n;
	int x;

	for (n = '0'; n <= '9'; n++)
	{
		for (x = '1'; x <= '9'; x++)
		{
			putchar(n);
			putchar(x);
			if (x <= '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
