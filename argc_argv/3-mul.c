#include <stdio.h>
#include <stdlib.h>

/**
 * main -  multiplies two numbers.
 * @argc: number of argument.
 * @argv: array of strings hold argument.
 *
 * Return: 0 (SUCCESS)
 * 1 otherwise
 **/

int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0, mult = 1;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mult = num1 * num2;
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
