#include <stdio.h>

/**
 * _islower - checks for lowercase character
 *@c: the character to be check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	int b;

	if (c < 97)
	{
		b = 0;
	}
	else
	{
		b = 1;
	}
	return (b);
}
