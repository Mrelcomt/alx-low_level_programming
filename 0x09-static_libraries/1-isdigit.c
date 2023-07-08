#include <stdio.h>
/**
 * _isdigit - used to check whether digit or not
 * @c: a character accepts from main
 * Description: check the character wether digit or not
 * Return: 1 if its digit else 0
 */
int _isdigit(int c)
{
	int b;

	if (c >= 48 && c <= 57)
		b = 1;
	else
		b = 0;
	return (b);
}
