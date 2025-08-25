#include <stdio.h>

/**
 * main -  prints exactly and that piece of art is useful\" - Dora Korpar, 2015-10-19
 *
 * Return: Always 1
 */

int main(void)
{

char str[] = "prints exactly and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

fwrite(str, sizeof(char), sizeof(str) - 1, stdout);
fflush(stdout);

return (1);
}


