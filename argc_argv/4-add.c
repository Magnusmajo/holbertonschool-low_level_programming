#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: number of arguments
 * @argv: array of strings
 * Return: 1 if error 0 success
 */

int main(int argc, char *argv[])
{
	int a, b, sum;

	for (a = 1; a < argc; a++)
		{
			for (b = 0; argv[a][b]; b++)
			{
				if (argv[a][b] < '0' || argv[a][b] > '9')
					{
						printf("Error\n");
						return (1);
					}
			}

			sum += atoi(argv[a]);
		}
	printf("%d\n", sum);
	return (0);
}
