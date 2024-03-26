#include "main.h"

int _raizde(int, int);

/**
 * _sqrt_recursion - Find the root of entry number
 * @n: Entry integer
 * Return: Root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if ((n == 0) || (n == 1))
		return (n);

	return (_raizde(n, 1));

}

/**
 * _raizde - find the root of a
 * @a: Entry integer
 * @b: Entry integer
 * Return: Root of a
 */

int _raizde(int a, int b)
{
	if (b * b == a)
		return (b);

	return (_raizde(a, b + 1));
}
