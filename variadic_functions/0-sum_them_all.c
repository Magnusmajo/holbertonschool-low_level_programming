#include "variadic_functions.h"

/**
 * sum_them_all - sum all parameters
 * @n: unsigned integer
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int i = 0;
	unsigned int  ui;

	va_start(list, n);

	for (ui = 0 ; ui < n ; ui++)
	{
		i += va_arg(list, int);
	}

	va_end(list);

	return (i);

}
