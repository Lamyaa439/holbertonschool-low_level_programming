#include <stdio.h>
/**
* main - prints the alphabet except q and e
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char alp = 'a';

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp == 'e' || alp == 'q')
		{
			continue;
		}
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
