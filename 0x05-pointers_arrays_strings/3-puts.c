#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string folowed by newline
 * @str: is a string to print out
 * Return:there is no return
 */
_puts(char *str)
{
	while(str != '\0')
	{
		putchar(*str);
		str++;

	}
	putchar('\n');
}
