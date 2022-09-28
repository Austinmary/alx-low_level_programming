#include "main.h"

/**
 * factorial - Returns tge factorial of a guven number
 * @n: Pointer block of memory to fill
 *
 * Return: Factorial
 */

int factorial(int n)
{
	if (n == 0)
		return (1);

	else if (n < 0)
		return (-1);

	else
		return (n * factorial(n - 1));
}
