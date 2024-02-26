/*
 * File: 5-rev_string.c
 * Author: Alexis R. Rodriguez
 */
#include "main.h"
/**
  * rev_string - reverse a string
  * @s: that's the string
  *
  * Return: void)
  *
  */
void rev_string(char *s)
{
	char *x = s;
	char temp;

	for (; *(s + 1); )
	{
		s++;
	}
	while (x < s)
	{
		temp = *x;
		*x = *s;
		*s = temp;
		s--;
		x++;
	}

}
