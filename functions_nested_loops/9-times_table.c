#include "main.h"

/**
 * times_table - prints the times table up to 9
 *
 * Return: void
 */
void times_table(void)
{
	int a, b, c;

	for (c = 0; c < 10; c++)
	{
		_putchar(48);
		_putchar(',');
		for (a = 1; a <= 9; a++)
		{
			b = a * c;
			if (b <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(b + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(b / 10 + 48);
				_putchar(b % 10 + 48);
			}
			if (a < 9)
				_putchar(',');

		}
		_putchar('\n');
	}
}
