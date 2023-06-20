#include <stdio.h>

/**
 * main - call print_alphabet function
 *
 *Return: Always 0.
 *
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
}
int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}
