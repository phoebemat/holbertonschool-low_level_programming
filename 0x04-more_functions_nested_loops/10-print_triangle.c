#include "holberton.h"

/**
 * print_triangle - triangle printed of certain size
 * @size: the size of the triangle
 *
 */

void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
	{
	_putchar('\n');
	return;
	}

	for (a = 0; a < size; a++)
	{
	c = size - a;
		for (b = 1; b <= size; b++)
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
