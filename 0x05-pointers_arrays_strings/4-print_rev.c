#include "main.h"

/**
 * print_rev - main function.
 * @s: Pointer, the string to print.
 * Description: prints a string in reverse.
 * Return: none.
 */

void print_rev(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{
i++;
}

for (i = i - 1 ; i >= 0; i--)
{
_putchar (s[i]);
}

putchar('\n');
}
