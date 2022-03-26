#include "main.h"

/**
 * print_rev - main function.
 * @s: Pointer, the string to print.
 * Description: prints a string in reverse.
 * Return: none.
 */

void print_rev(char *s)
{
int i = 0

while (s[i] != '\0')
{
i++;
}

i--;

while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
