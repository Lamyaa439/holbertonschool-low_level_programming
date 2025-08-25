#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
* main - Entry point
* Return: Always
**/
int main(void)
{
const char x[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write(2, x, strlen(x));
return (1);
}
