#include <stdio.h>
/**
 * _isupper - is used to check uper or not
 * @c: is the accepting value
 * Description: it check the accepted char
 * wether its uper or not
 * Return: 1 if its uper 0 if its different
 */
int _isupper(int c)
{
	int b;

	if (c >= 65 && c <= 90)
		b = 1;
	else
		b = 0;
	return (b);
}
