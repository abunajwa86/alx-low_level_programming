#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;
	int f_d;
	int m_d;
	int l_d;

	while (x <= 999)
	{
		f_d = (x / 100 + '0');
		m_d = (x / 10 % 10 + '0');
		l_d = (x % 10 + '0');

		if ((f_d < m_d)
			&&
		(m_d < l_d))
		{
			putchar(f_d);
			putchar(m_d);
			putchar(l_d);

			if
	(x != 987)

			{
				putchar(',');
				putchar(' ');
			}
		}
		(x++);
	}
	putchar('\n');
	return (0);
}
