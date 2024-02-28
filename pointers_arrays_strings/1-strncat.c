#include "main.h"

/**
 * _strncat - Concatenates two strings using, it will use
 *  at most n bytes from src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (b < n && src[b] != '\0')
	{
		dest[a + b] = src[b];
		b++;

	}
	dest[a + b] = '\0';

	return (dest);
}


