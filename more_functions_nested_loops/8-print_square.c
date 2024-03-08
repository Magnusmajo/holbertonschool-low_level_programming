#include "main.h"

/**
 *  print_square - prints a square, followed by a new line.
 *
 * @n: description
 */

void print_square(int n)
{
	int a, b;

	for (a = 0; n > a; a++)
	{
		for (b = 0; n > b; b++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

	if (n <= 0)
	_putchar('\n');

}
