#include "main.h"

/**
 * _islower - checks for lowercase
 *
 * Return: 1 if lowercase and 0 if upper
 */

int _islower(int letter)
{
	if (letter >= 'a' && letter <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
