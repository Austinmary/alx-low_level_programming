#include "main.h"
/**
* _strcpy - main function used in the programme
* Return: Return's dest
* @dest:char parameter
* @src: char parameter
*/
char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b;
	}
	dest[b] = '\0';
	return (dest);
}
