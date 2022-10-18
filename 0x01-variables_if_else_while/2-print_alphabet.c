#include <stdio.h>
/**
 * main - A program to print Alphabet in lower and upper case.
 *
 * Description: using main function to print Alphabet
 *
 * Return: 0
 *
 */
int main(void)
{
	char ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	
	return (0);
}
