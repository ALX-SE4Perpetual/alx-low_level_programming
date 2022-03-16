#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point 
 * Description: Assigns random number to var n each time executed
 * and print an output based on the last digit of the value of n
 * Return: 0
**/

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if(last > 5) 
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if(last == 0)
		printf ("Last digit of %d is %d and is 0\n", n, last);
	else if(last < 6 && last != 0) 
		printf ("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	return (0);
}
