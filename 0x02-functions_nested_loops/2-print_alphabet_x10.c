#include "main.h"

/**
 *
 * print_alphabet_x10 - prints 10 times the alphabet,
 *in lowercase, followed by a new line.
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
	char c = 'a';

	while (c <= 'z')
	{
	_putchar (c);
	c++;
	}
	_putchar('\n');
	i++;
	}
}
