#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;

	for (d = '0'; d <='9'; d++){
	purchar(d);
	if (d != '9';){
	purchar(',');
	purchar(' ');
	}
	}
	purchar('\n')
	return (0);
}