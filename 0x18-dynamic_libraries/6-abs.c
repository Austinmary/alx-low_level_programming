#include "main.h"
/**
 * _abs - function computing absolute value of an inputed integer
 *
 * @ab: inputed integer
 *
 * Return: returns the absolute value of ab
 */

int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
