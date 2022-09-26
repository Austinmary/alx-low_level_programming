#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets length of a prefix substring
 * @s: string to check
 * @accept: string to check against
 *
 * Return: number of bytes of s in accept
 */

unsigned int _strspn(char *s, char *accept);
{
	int a;
	int c;
	unsigned int output = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (c = 0; s[c] != '\0'; c++)
		{
			if (s[a] == accept[c])
			{
				output++;
				break;
			}
		}
		if (s[c] == '\0')
			return (output);
	}
	return (output);
}
