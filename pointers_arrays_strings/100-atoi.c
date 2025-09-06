#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 * @s: the string to convert
 *
 * Return: The integer value of the converted string.
 *
 **/
int _atoi(char *s)
{
	int i;
	int result = 0, len = 0, sign = 1;
	char *str = s;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	str = s;
	for (i = 0; i < len; i++)
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		if (str[i] - '0' >= 0 || str[i] - '0' <= 9)
		{
			result = result * 10 + (str[i] - '0');
		}
	}
	return (sign * result);
}
