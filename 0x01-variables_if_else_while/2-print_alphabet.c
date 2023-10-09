#include <stdio.h>

/**
 * main - prints the whole alphabet in lower case
 * Return: (0) if succeessful
*/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
