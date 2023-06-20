#include "main.h"

/**
 * main - call print_alphabet function
 *
 *Return: Always 0.
 *
 */
void print_alphabet(void);
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
}
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}
