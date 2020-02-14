#include "holberton.h"

/**
 * print_square - check the code for Holberton School students.
 * @size: size of square
 * Return: Always 0.
 */

void print_square(int size);
{
	if (size > 0)
	{

	int x;
	int y;

	while (y < size)
	{
	x = 0;
		while (x < size)
		{
		_putchar('#');
		x++;
		}
	_putchar('\n');
	y++;
	}

	}

	else
	_putchar('\n');

}
