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

	for (; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
	}
	putchar('\n');
	return (0);

}
