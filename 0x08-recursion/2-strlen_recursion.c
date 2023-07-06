#include "main.h"
/**
 * _strlen_recursion - count string length
 * @s: string pass from main
 * Return: return the length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
