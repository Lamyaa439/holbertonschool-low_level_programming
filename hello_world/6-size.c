#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints the size of various types based on
 *        the computer it is compiled and run on..
 *
 * Return: Always 0.
 */

int main(void)
{

printf("Size of a char: %d\n", sizeof(char));
printf("Size of a int: %d\n", sizeof(int));
printf("Size of a long int: %d\n", sizeof(long int));
printf("Size of a long long int: %d\n", sizeof(long long int));
printf("Size of a float: %d\n", sizeof(float));

return (0);
}
