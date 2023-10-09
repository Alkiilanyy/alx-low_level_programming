#include <stdio.h>

/**
 * main - prints numbers from 0 .. 9
 * Return: (0) if succeessful
*/
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
