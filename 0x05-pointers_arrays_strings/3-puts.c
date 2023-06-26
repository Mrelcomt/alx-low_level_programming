#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string folowed by newline
 * @str: is a string to print out
 * Return:there is no return
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;

	}
	_putchar('\n');
}
