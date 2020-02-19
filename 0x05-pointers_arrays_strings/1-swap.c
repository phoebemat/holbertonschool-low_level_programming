#include "holberton.h"
#include <stdio.h>
/**
 * swap_int - check the code for Holberton School students.
 * @a: int variable
 * @b: second int variable
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{

	int swap;

	swap = *a;
	*a = *b;
	*b = swap;

}
