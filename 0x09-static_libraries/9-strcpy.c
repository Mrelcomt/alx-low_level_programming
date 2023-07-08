#include "main.h"
/**
 * _strcpy - coppy string on other var
 * @dest: a pointer the string to be coppy
 * @src: a pointer hold the string
 * Return: no return
 */
char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b;
	}
	dest[b] = '\0';

	return (dest);
}
