#include "main.h"

/**
 * _islower - function checking lowercase characters
 * @h: a character input
 * Return: returns 1 if h is lowercase and returns 0 if otherwise
 */
int _islower(int h)
{
	if (h >= 'a' && h <= 'z')
		return (1);
	else
		return (0);
}
