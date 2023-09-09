#include <stdio.h>
/**
 * main - print all possible combination
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int num_1, num_2;

	num_1 = '0';
	num_2 = '0';

	while (num_1 <= '9')
	{
		while (num_2 <= '9')
		{
<<<<<<< HEAD
			if (num_1 < num_2)
			{
				putchar(num_1);
				putchar(num_2);
=======
			if (num_1 > num_2)
			{
				putchar(num_1 + '0');
				putchar(num_2 + '0');
>>>>>>> 0687b7e34c7114cd8d91be1eaa4638b5e97936bd
				if (num_1 != '8' || (num_1 == '8' && num_2 != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			num_2++;
		}
<<<<<<< HEAD
=======
		num_2 = '0';
>>>>>>> 0687b7e34c7114cd8d91be1eaa4638b5e97936bd
		num_1++;
	}
	putchar('\n');
	return (0);
}


