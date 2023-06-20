#include <stdio.h>
/**
 * main - call function _is alpha
 *
 * _isalpha - return 1 if its alpha else 0
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	int a;

	if (c >= 65 || c <= 122)
		a = 1;
	else
		a = 0;
return (a);

}
int main(void)
{
	int r;

	r = _isalpha('H');
	putchar(r + '0');
	r = _isalpha('o');
	putchar(r + '0');
	r = _isalpha(108);
	putchar(r + '0');
	r = _isalpha(';');
	putchar(r + '0');
	putchar('\n');
	return (0);
}
