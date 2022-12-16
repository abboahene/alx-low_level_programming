#include "main.h"

/**
* print_triangle - print triangle
* @n: size of triangle
*/
void print_triangle(int n)
{
	int i, j;

	if (n < 1)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < (n - i + 1); j++)
		{
			_putchar(' ');
		}

		for (j = 0; j < (i + 1); j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
