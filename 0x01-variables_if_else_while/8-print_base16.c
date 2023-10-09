#include <stdio.h>

/**
 * main - prints the alphabet in reverse
 * Return: (0) if successful
*/
int main(void)
{
	int ch;

	for (ch = 0x0; ch <= 0xF; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
