#include "main.h"

/**
 * jack_bauer - display time 24h.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int i, j, k, l, m, n;

	for (i = 0; i < 24 ; i++)
	{
		k = i / 10;
		l = i % 10;
		for (j = 0; j < 60; j++)
		{
			m = j / 10;
			n = j % 10;
			_putchar('0' + k);
			_putchar('0' + l);
			_putchar(':');
			_putchar('0' + m);
			_putchar('0' + n);
			_putchar('\n');
		}
	}
}
