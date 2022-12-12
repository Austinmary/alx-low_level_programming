#include "main.h"

/**
* _isupper - Checking for upper case letters
* @c: agument for the function
* Return: Returns 1 when c == uppercase letter and 0 if otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
