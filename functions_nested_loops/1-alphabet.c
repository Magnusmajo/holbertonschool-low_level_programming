#include "main.h"

/**
 * print_alphabet - prints 10 times the alphabet
 *
 * Return: On success 1.
 */
void print_alphabet(void)
{
	int word;

	for (word = 'a'; word <= 'z'; word++)
	{
		_putchar(word);
	}
	_putchar('\n');
}
