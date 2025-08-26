#include <stdio.h>
/**
* main - prints the alphabet in lowercase.
*
* Return: Always 0 (Success)
*/

int main(void)
{
        char alp = "aA";

        while (alp <= "zZ")
        {
                putchar(alp);
                alp++;
        }
        putchar('\n');
        return (0);
}
