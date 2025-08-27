#include <stdio.h>
/**
* main - Prints all hexadecimal digits in lowercase.
*
* Return: Always 0.
*/

int main(void)
{
	int n, x, i;

	for (n = '0'; n <= '7'; n++)
	{
		for (x = n + 1; x <= '8'; x++)
		{
			for (i = x + 1; i <= '9'; i++)
			{
				putchar(n);
				putchar(x);
				putchar(i);
				if (n != '7' || (x != '8' || (x == '8' && i != '9')))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
