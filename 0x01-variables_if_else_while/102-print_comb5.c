#include <stdio.h>
/**
 * main - print 4 digits seperated by space and coma
 *
 * Return: (0)
 *
 */
int main(void)
{
	int num1, num2, num3, num4;

	num1 = num2 = num3 = num4 = 0;

	while (num1 <= 9)
	{
		while (num2 <= 9)
		{
			while (num3 <= 9)
			{
				while (num4 <= 9)
				{
					if (((num3 + num4) > (num1 + num2) && num3 >= num1) || num1 < num3)
					{
						putchar(num1 + '0');
						putchar(num2 + '0');
						putchar(' ');
						putchar(num3 + '0');
						putchar(num4 + '0');
					if (!(num1 == 9 && num2 == 8 && num3 == 9 && num4 == 9))
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					}
					num4++;
				}
			}	num3++;
		}	num2++;
	}	num1++;
	putchar('\n');
	return (0);
}

