#include "main.h"

/**
 *  _strpbrk - searches a string for any of a set of bytes.
 * @s: A pointer to the string to be searched.
 * @accept: A pointer to the string containing the
 * characters to match.
 * Return: A pointer to the location in 's' where the first
 *  match is found, or a null pointer if no matches are found.
 */
char *_strpbrk(char *s, char *accept)
{
	int n_1, n_2;

	for (n_1 = 0; s[n_1] != '\0'; n_1++)
	{
		for (n_2 = 0; accept[n_2] != '\0'; n_2++)
		{
			if (s[n_1] == accept[n_2])
				return (s + n_1);
		}
	}
	return ('\0');
}
