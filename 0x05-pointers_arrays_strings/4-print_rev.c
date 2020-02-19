#include "holberton.h"
/**
 * print_rev - print a string in reverse
 * @s: string being reversed
 * Return: Always 0
 */
void print_rev(char *s)
{
	int a;
	int b;

	while (s[a] != '\0')
		{
		a++;
		}

	for (b = (a - 1); b >= 0; b--)
		{
		_putchar(s[b]);
		}

	_putchar('\n');



}
