#include "main.h"

/**
 * print_alphabet - prints 10 times the alphabet
 *
 * Return: On success 1.
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
