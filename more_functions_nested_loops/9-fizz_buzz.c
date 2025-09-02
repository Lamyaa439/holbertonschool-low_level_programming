#include <stdio.h>

/**
* main - prints the numbers from 1 to 100. But print Fizz instead of
* the number and for the multiples of five print Buzz.
* For numbers which are multiples of both three and five print FizzBuzz.
*
* Return: Always 0.
*/
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else if ((n % 3) == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if ((n % 5) == 0)
		{
			printf("Buzz ");
			continue;
		}
		printf("%d ", n);
	}
	printf("\n");
	return (0);
}
