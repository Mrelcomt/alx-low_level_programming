#include "main.h"
/**
 * rev_string - used to reverse the string
 * @s: the given string
 * Return: there is no return
 */
void print_rev(char *s)
{
	int l, i;
	char ch;

	/*find string length without null char*/
	for (l = 0; s[l] != '\0'; ++l)
		;

	/*swap the string by looping to half the string*/
	for (i = 0; i < l / 2; ++i)
	{
		ch = s[i];
		s[i] = s[l - 1 - i]; /*-1 because the array starts from 0*/
		s[l - 1 - i] = ch;
	}
}
