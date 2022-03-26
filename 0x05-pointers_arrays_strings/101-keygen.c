#include "main.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that generates random valid passwords
 * @void: Empty input
 *
 * Description: Program that generates random valid passwords
 * Return: 0 if works
 */

int main(void)
{
int num;

srand(time(0));
num = rand();
printf("%i\n", num);
return (0);
}
