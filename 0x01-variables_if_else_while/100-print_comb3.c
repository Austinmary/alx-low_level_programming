#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the numbers 01 to 89
 * Mumbers must by separated by , followed by a space
 * Number shouldbe printed in ascending order with 2 digits
 * You can only use the putchar function
 * Return: 0
 */

int main(void)
{
int n1 = 0, n2;
while (n1 <= 9)
{
n2 = 0;
while (n2 <= 9)
{
if (n1 != n2 && n1 < n2)
{
putchar(n1 + 48);
putchar(n2 + 48);

if (n1 + n2 != 17)
{
putchar(',');
putchar(' ');
}
}
++n2;
}
++n1;
}

putchar('\n');
return (0);
}

