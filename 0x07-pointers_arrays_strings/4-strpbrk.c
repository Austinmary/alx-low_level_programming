#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to check
 * @accept: string to check against
 *
 * Return: pointer to byte in s that matches or NULL if no match
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int a, c;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (c = 0; accept[c] !='\0'; c++)
		{
			if (s[a] == accept[c])
			{
				return (s + a);
			}
		}
	}
	return (0);
}
