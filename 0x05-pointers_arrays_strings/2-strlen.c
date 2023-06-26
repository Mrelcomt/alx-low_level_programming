#include "main.h"
/**
 * _strlen - tels the length of string
 * @s: string to check
 * Return: return the length of string
 */
int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
