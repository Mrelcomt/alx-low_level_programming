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
		if (i < 50)
		{
			if (i % 2 == 1 || i == 48)
			{
				_putchar(i);
			}
		}
		else
			_putchar(i);
	}
}
