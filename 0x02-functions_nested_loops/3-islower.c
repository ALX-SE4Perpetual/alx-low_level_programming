#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: an ASCII character
 * Return: 1 if lowercase and 0 if upper
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
