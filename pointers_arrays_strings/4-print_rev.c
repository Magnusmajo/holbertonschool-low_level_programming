/*
 * File: 4-print_rev.c
 *
 * Author: Alexis R. Rodriguez
 */
#include "main.h"
/**
  * print_rev - prints a string in reverse
  * @s: that's the string:wq
  *
  * Return: void
  */
void print_rev(char *s)
{
int count = 0;
for (; *s; )
{
	count++;
	s++;
}
for (; count; count--)
{
	s--;
	_putchar(*s);
}
_putchar('\n');
}
