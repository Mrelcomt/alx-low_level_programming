#include "main.h"
#include <stdio.h>
/**
 * _isupper - check chara is upper
 * @c: its an argument come from main
 * Discription: these code accept cahr and compair
 * whther its uper or not
 * Return: return 1 if its uper else 0 store on var b
 */
int _isupper(char c)
{
	int b;

	if (c >= 65 && c <= 90)
	{
		b = 1;
	}
	else
	{
		b = 0;
	}
	return (b);
}

