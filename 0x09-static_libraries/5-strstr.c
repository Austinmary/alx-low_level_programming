#include "main.h"

/**
 * _strstr - locate the substring
 * @haystack: string to locate
 * @needle: substring to locate in the function
 * Return: returns string at starting sub or null
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	int c;

	if (needle[0] == '\0')
		return (haystack);

	for (a = 0; haystack[a] != '\0'; a++)
	{
		if (haystack[a] == needle[0])
		{
			for (c = 0; needle[c] != '\0'; c++)
			{
				if (haystack[a + c] != needle[c])
					break;
			}
			if (needle[c] == '\0')
				return (haystack + a);
		}

	}
	return ('\0');
}
