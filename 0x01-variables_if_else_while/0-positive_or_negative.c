#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - generate random number to detect -ve or +ve
 *
 * Return: always (0)
 *
 *  more headers goes here
 *   betty style doc for function main goes there
 *
 */
int main(void)
{
	int n;

	srand(time(NULL));
	n = rand() - (RAND_MAX / 2);
	/* your code goes here */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
