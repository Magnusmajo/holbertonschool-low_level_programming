/*
 * File: 7-puts_half.c
 * Author: Alexis R. rodriguez
 */
#include "main.h"
/**
 * puts_half - print second half of str
 *
 * @str: string to cut in half & print
 *
 * Return: always void
 */
void puts_half(char *str)
{
	int count = 0, i;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}

	if (count % 2 == 1)
		i = count / 2;
	else
		i = (count - 1) / 2;

	for (i++; i < count; i++)
		_putchar(str[i]);
	_putchar('\n');
}
