#include <stdio.h>
/**
 * main - print alphabet except q and o
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'a')
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');
	return (0);

}
