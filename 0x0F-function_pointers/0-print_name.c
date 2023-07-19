#include "function_pointers.h"
/**
 * print_name - print the name of function
 * @name: name to be printed
 * @f: function pointer
 * Return: 0 success
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
