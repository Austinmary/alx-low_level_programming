#include "main.h"

/**
 * _isalpha - function checking lowercase characters
 * @h: a character input
 * Return: returns 1 if h is lowercase or uppercase and returns 0 if otherwise
 */

int _isalpha(int h)
{
	if ((h >= 'a' && h <= 'z') || (h >= 'A' && h <= 'Z'))
		return (1);
	else
		return (0);
}
