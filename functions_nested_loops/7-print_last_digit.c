#include "main.h"

/**
 * print_last_digit - display last digit.
 * @x:integer.
 * Return: Always 0.
 */
int print_last_digit(int x)
{
        int n_1, n_2;

        n_1 = x % 10;
        if (n_1 < 0)
        {
                n_1 = -n_1;
        }
        n_2 = '0' + n_1;
        _putchar(n_2);
        return (n_1);
}
