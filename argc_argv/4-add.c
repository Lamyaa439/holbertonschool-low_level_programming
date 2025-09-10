#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: number of argument.
 * @argv: array of strings that holds argument.
 *
 * Return: the sum of positive number.
 *
 **/
int main(int argc, char *argv[])
{
	int num = 0, sum = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		sum += num;
		for (j = 0; argv[i][j] != '\0'; j++) /*argv is a 2-d array*/
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");

				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
