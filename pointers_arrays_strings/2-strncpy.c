#include "main.h"
 /**
 * _strncpy - Copies at most an inputted number
 *            of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
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
