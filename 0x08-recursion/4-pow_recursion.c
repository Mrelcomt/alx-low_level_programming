#include "main.h"
/**
 * _pow_recursion - calculate the power
 * @x: num to be power
 * @y: the power of num
 * Return: power of x
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
