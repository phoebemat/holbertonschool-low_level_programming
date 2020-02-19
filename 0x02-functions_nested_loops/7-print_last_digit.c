#include "holberton.h"
/**
 * print_last_digit - new func for modulous 10
 * @y: integer letter chosen
 *
 * Return: absolute value only
 */
int print_last_digit(int y)
{
	int x;

	if (y >= 0)
		x = y % 10;
	else
		x = (y % 10) * -1;

	_putchar(x + '0');
	return (x);
}
