#include "holberton.h"

/**
 * more_numbers - print array of numbers 10 times
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int a;
	int c;

	a = 0;

	while (a < 10)
	{
	c = 0;
	while (c < 15)
		{
		if (c > 9)
			_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
			c++;
		}
	a++;
	_putchar('\n');
	}



}
