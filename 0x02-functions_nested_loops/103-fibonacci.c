#include <stdio.h>

/**
 * main - main block
 * Description: computes and Fibonacci even valued numbers < 4,000,000
 * starting with 1 and 2, followed by a new line
 * Return: 0
 */

int main(void)
{
	int a = 0, b = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
}
