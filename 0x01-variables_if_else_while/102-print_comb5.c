#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x = 0;
	int f_d;
	int l_d;

	int x2;
	int f_d2;
	int l_d2;	
	while (x <= 98)

	{
		f_d = (x / 10 + '0');
		l_d = (x % 10 + '0');

		x2 = 0;

		while (x2 <= 99)
		{
			f_d2 = (x2 / 10 + '0');
			l_d2 = (x2 % 10 + '0');
			if (x < x2)
			{
				putchar(f_d);
				putchar(l_d);
				putchar(' ');
				putchar(f_d2);
				putchar(l_d2);

				if (x != 98)
				{
					putchar(';');
					putchar(' ');
				}
			}
		x2++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
