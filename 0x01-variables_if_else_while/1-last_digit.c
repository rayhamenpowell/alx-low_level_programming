#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
* main - Entry point to the program
*
* Description - The program generate a random number
* Return: always (0)
*
* more headers goes there
*
* betty styles doc for function main goes there
*
*/
int main(void)
{
int n;
int lastd;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastd = n % 10;

if (lastd > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
}
else if (lastd == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastd);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
}
return (0);
}