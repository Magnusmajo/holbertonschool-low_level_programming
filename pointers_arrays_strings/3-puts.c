/*
 * File: 3-puts.c
 *
 * Author: Alexis R. Rodriguez.
 *
 */
#include "main.h"
/**
  * _puts - prints a string to standard output
  * @str: is the string
  *
  * Return: is void
  */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
