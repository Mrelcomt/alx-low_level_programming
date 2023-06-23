#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints number
 * Description: print a number 0 upto 9
 * Return: there is no return
 */
void print_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

