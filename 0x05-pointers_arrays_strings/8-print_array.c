#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print n elements of array
 * @n: number of elementss
 * @a: pointer to n
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x < n - 1)
		{
			printf("%d", a[x]);
			printf(", ");
		}
		else
			printf("%d", a[x]);
	}
	printf("\n");
}
