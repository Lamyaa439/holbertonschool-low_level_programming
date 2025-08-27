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

	for (n = '0'; n <= '8'; n++)
	{
		for (x = n + 1; x <= '9'; x++)
		{
			putchar(n);
			putchar(x);
			if (n != '8' || (n == '8' && x != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
