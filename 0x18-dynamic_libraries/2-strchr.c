#include "main.h"
#include <stddef.h>
/**
* _strchr - A function that locates a string
* @s: An argument function that points to char variable
* @c: An argument of char datatype
* Return: Returns NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*s != c)
		{
			s++;
		}
	}
	if ('\0' == c)
	{
		return (s);
	}
	return (NULL);
}
