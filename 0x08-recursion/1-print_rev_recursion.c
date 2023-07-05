#include "main.h"
/**
 * _print_rev_recursion - print reverse string
 * @s:string pass from main
 * Return: there is no return
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
