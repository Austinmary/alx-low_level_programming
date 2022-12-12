#include "main.h"
/**
* _strspn - a function that gets the length of a prefix substring.
* @s: A pointer consisting of bytes from accept
* @accept: A pointer argument pointing to char datatype
* Return: Returns number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	int l = 0;

	int m = 0;

	int n = 0;

	while (s[l] != '\0')
	{
		if (s[l] != 32)
		{
			while (accept[m] != '\0')
			{
				if (s[l] == accept[m])
				{
					n++;
				}
				m++;
			}
		}
		else
		{
			return (n);
		}
		l++;
	}
	return (n);
}
