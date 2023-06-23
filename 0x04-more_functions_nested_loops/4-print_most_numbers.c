#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - print most numbers
 * Description: print odd numbers
 * Return: there is no return
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i < 50 && i % 2 == 1)
			_putchar(i);
	}
}
