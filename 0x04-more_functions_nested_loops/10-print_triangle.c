#include "holberton.h"

/**
 * print_triangle - prints a triangle to the terminal
 * @size: the size of the triangle
 *
 */

void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (c <= 0)
	{
	_putchar('\n');
	return;
	}

	for (a = 0; a < c; a++)
	{
	c = c - a;
		for (b = 1; b <= c; b++)
		{
			if (b < c)
			{
			_putchar(' ');
			}
			else
			{
			_putchar('#');
			}
		}
		_putchar('\n');
	}
}
