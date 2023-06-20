#include <stdio.h>
/**
 * _isalpha - checks for alphabetic character
 * @c: the charcter to be checked
 *
 * Return: (0) if c is letter, (0)otherwise
 */
int _isalpha(int c)
{
	int a;

	if (c >= 65 && c <= 122)
		a = 1;
	else
		a = 0;
return (a);
}
