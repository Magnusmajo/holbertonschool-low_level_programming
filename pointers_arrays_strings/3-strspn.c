#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * Calculates the number of bytes in the initial
 * segment of s which consist only of bytes from accept.
 * @s: entry string
 * @accept: Entry substring containing the characters
 * to match in s.
 * Return: number of bytes in the initial segment of s
 * that consist only of characters from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int n_1, n_2, a, b = 1;
	unsigned int i = 0;

	for (n_1 = 0; s[n_1] != '\0'; n_1++)
	{
		a = 0;
		for (n_2 = 0; accept[n_2] != '\0'; n_2++)
		{
			if (s[n_1] == accept[n_2] && b == 1)
			{
				i++;
				a = 1;
			}
		}

		if (a == 0)
			b = 0;
	}

	return (i);
}
