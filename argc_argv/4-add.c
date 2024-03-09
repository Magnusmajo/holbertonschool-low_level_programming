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
	int n_1, n_2, n_3, sum;

	for (n_1 = 1; n_1 < argc; n_1++)
	{
		for (n_2 = 0; argv[n_1][n_2] != '\0'; n_2++)
		{
			n_3 = isdigit(argv[n_1][n_2]);
			if (n_3 == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[n_1]);
	}
	printf("%d\n", sum);
	return (0);
}
