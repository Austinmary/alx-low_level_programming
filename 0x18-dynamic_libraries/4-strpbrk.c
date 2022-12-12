#include <stdlib.h>
#include "main.h"
/**
* _strpbrk - A function that search a string for a set of bytes
* @s: Pointer to the string to search
* @accept: contains bytes to search for
* Return: Returns a pointer to the byte in @s that matches one of the bytes in
* @accept, or NULL if no such byte is found.
*/

char *_strpbrk(char *s, char *accept)
{
	int j = 0;

	while (*s)
	{
		while (accept[j])
		{
			if (*s == accept[j])
			{
				return (s);
			}
			j++;
		}
		s++;
	}
	return (NULL);
}
