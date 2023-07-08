#include <stdio.h>
/**
 * main - print its name, followed by new line
 * @arc: number of command line arguments
 * @argv: array that contains the progaram command line arguments
 * Return: 0 success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
