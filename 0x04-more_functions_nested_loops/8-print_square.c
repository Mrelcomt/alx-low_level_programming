#include "main.h"
/**
 * print_square - will print square
 * @n: value for the sides of squares
 * Description: these function accept the side
 * of square and print it
 * Return: tere is no print
 */
void print_square(int n)
{

	int j;
	int i;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
