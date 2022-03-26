#include "main.h"

/**
 * print_rev - main function.
 * @s: Pointer, the string to print.
 * Description: prints a string in reverse.
 * Return: none.
 */

void print_rev(char *s)
{
int count = 0;

while (s[count] != '\0')
{
count++;
}
count--;

while (count >= 0)
{
_putchar(s[count]);
}

putchar('\n');
}
