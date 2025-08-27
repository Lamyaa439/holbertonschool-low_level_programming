#include <stdio.h>
#include <string.h>
/**
* main - prints the alphabet in lowercase.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
