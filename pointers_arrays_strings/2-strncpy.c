#include "main.h"

/**
 * _strncpy - concatenates two strings
 * @dest: the string that will modified.
 * @src: the string that ill be concatenated to @des.
 * @n: how much to copy from src into dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (src[x++])
		y++;

	for (x = 0; src[x] && x < n; x++)
		dest[x] = src[x];

	for (x = y; x < n; x++)
		dest[x] = '\0';

	return (dest);
}
