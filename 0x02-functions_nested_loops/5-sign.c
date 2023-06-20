#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: its a number to compair
 *
 * Return: (1) if its positive (0) if its 0
 * (-1) if it's negative
 */
int print_sign(int n)
{
	int d;

	if (n > 0)
	{
		d = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		d = 0;
		_putchar('0');
	}

	else
	{
		d = -1;
		_putchar('-');
	}
	return (d);
}

