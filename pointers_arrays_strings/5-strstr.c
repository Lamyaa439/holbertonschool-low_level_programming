#include "main.h"
/**
 * *_strstr - locates a substring.
 * @haystack: pointer
 * @needle: pointer
 *
 * Return: a pointer to the beginning of the located substring
 * NULL if the substring is not found.
 **/
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (; haystack[0]; ++haystack)
	{
		for (i = 0; haystack[i] == needle[i]; i++)
		{
			if (!(needle[i]))
			{
				return (haystack);
			}
		}
	}
	return (0);
}
