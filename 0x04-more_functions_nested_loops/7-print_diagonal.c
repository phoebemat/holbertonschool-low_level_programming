#include "holberton.h"

/**
 * print_diagonal - print diagonal line based on n
 * @n: integer for function
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int a;
	int b;

	for (a = 1; a <= n; a++)
	{
		for (b = 1; b < a; b++)
			_putchar(' ');

			_putchar('\\');
			_putchar('\n');
	}

	if (n <= 0)
	_putchar('\n');


}

