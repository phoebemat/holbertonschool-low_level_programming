#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - function to print the length of a string
 * @s: char pointer
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		{
		a++
		}

	return (a);
}
