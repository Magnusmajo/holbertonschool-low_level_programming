#include "main.h"

/**
 * _strstr -  function that locates a substring.
 * @haystack: A pointer to the first character of the haystack string.
 * @needle: A pointer to the first character of the needle string.
 * Return: pointer to the beginning of the located substring,
 * or NULL if not found
*/
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
	return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
