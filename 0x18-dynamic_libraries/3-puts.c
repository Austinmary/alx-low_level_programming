#include"main.h"
/**
 * _puts - main function printing a string and a new line
 * @str: argument paseed into the function
 * Return: Returns a void
 */
void _puts(char *str)
{
	while (*str != '\0')

	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}
