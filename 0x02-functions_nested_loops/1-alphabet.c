#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabets 10x
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alpha;
	int times;

	for (times = 0; times <= 9; times++)
	{
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
		putchar('\n');
	}
}

