#include <stdio.h>
/*
 *
 * main - prints the alphabet in lowercase, followed by a new line.
 **/
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
