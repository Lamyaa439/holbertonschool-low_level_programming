#include <unistd.h>
#include "main.h"

/**
* _isalpha - checks for alphabetic character
* @c: the character to check
*
* Return: Returns 1 if c is a letter, lowercase or uppercase
* Returns 0 otherwise
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		if (c >= 91 && c < 97)
		{
			return (0);
		}
		return (1);
	}
	return (0);
}
