#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string folowed by newline
 * @str: is a string to print out
 * Return:there is no return
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;

	}
	_putchar('\n');
}
