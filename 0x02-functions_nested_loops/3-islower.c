#include <stdio.h>

/**
 *
 * main - call function _islower
 *
 * _islower - check where it is lower or not
 *
 * Return: always 0.
 *
 *
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
int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');

return (0);
}
