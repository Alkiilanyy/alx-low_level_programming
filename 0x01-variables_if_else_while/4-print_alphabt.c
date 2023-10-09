#include <stdio.h>

/**
 * main - prints the alphabets without (e,q)
 * Return: (0) if succeessful
*/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch == 'e' || ch == 'q')
		ch++;
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
