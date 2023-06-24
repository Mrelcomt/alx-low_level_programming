#include "main.h"
/**
 * more_numbers - print number 0 to 14
 * Description: print a numbers 0 -14 using _putchar
 * Return: thre is no return
 */
void more_numbers(void)
{
	int j;
	int i;

	for (j = 0; j < 10; j++)
	{

		for (i = 0; i <= 14; i++)
		{
			if (i <= 9)
				_putchar(i);
			else
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}

}
