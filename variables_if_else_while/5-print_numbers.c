#include <stdio.h>
/**
* main - prints all single digit numbers of base 10 starting from 0
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
