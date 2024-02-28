#include "main.h"
/**
 * _strcat - this fuction will concatenates two strings
 * @dest: the string that will modified.
 * @src: the string that ill be concatenated to @des.
 *
 * Return: a pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0')
	{
		dest[a + b] = src[b];
		b++;

	}
	dest[a + b] = '\0';

	return (dest);
}

