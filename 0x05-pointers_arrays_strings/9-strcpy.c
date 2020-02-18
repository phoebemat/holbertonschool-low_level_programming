#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - check the code for Holberton School students.
 * @dest: pointer to destination
 * @src: pointer to source
 * Return: the value stored within dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		{
		dest[a] = src[a];
		}
	dest[a] = '\0';


	return (dest);
}
