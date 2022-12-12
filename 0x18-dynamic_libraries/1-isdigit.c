#include "main.h"
/**
* _isdigit - Checks if input is between 0 and 9
* @c: agument
* Return: Returns 1 if agument is a digit and 0 if otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
