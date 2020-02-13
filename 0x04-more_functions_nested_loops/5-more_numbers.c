#include "holberton.h"

/**
 * more_numbers - print array of numbers 10 times
 *
 * Return: Always 0.
 */


void more_numbers(void)
{
	int a;
	int b;

	while (a < 15)
	{
		if (b > 9)
			{
			_putchar((b / 10) % 10);
			}
	_putchar('\n');
	}
}

