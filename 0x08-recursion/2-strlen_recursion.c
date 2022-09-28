#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The length of the string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursions(s + 1);
	}
}
