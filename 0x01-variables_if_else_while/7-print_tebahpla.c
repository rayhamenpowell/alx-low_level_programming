#include <stdio.h>
/**
 * main - print alphabet in reverse mode
 *
 * Return: always (0)
 *
 * Description - the alphabet in reverse order starting from z to a
 *
 */
int main(void)
{
	char alphabets = 'z';

	while (alphabets >= 'a')
	{
		putchar(alphabets);
		alphabets--;
	}
	putchar('\n');
	return (0);
}
