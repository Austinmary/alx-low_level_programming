#include "main.h"
/**
* _memcpy - The main function that copies memory area
* @src: A pointer argument pointing to address of char datatype
* @dest: A pointer argument pointing to address of char datatype
* @n: An argument of int datatype
* Return: Returns 0:
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		dest[j] = src[j];
		++j;
	}
	return (dest);
}
