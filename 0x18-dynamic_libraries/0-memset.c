#include "main.h"
/**
* _memset - Function that push a constant value of b into a pointer
* @s: A pointer that points to a memory address to be filled
* @b: A char variable which is an argument of the function
* @n: An unsigned int variable
* Return: Returns a pointer to an address of @s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		s[j] = b;
		++j;
	}
	return (s);
}
