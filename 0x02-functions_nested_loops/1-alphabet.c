/**
 * description: use new function print_alpha
 * print_alphabet: print a through z
 * Return: Always 0 (Success)
 */
#include "holberton.h"

void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{

	_putchar(ch);

	}

	_putchar('\n');

	return  (0);
}
