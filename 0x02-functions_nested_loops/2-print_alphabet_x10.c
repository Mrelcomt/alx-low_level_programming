#include <stdio.h>

/**
 *
 * main - call print_alphabet_x10
 *
 * print_alphabet_x10 - will print the alphabet a-z
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar (c);
		c++;
	}
}
int main(void)
{
	int a = 0;

	while (a < 9)
	{
		print_alphabet_x10();
		putchar ('\n');
		a++;
	}
return (0);
}
