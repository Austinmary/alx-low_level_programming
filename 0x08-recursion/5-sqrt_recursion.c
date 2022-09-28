#include "main.h"

/**
 * _evaluate - Evaluate function sqrt
 * @i: Interger
 * @n: Interger
 *
 * Return: Evaluate sqrt
 */

int _evaluate(int i, int n)
{
	if (n == 0 || n == 1)
		return (n);

	else if (i * i < n)
		return (_evaluate(i + 1, n));

	else if (i * i == n)
		return (-1);
	return (-1);
}
