#include "main.h"
/**
 *main - multiplies 2 arguments
 *@argc: numbers of arg
 *@argv: array of strings
 *Return: 1 error 0 end
 */
int main(int argc, char *argv[])
{
	int num_1, num_2 = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (num_1 = 1; num_2 < argc; num_1++)
		num_2 *= atoi(argv[num_1]);

	printf("%d\n", num_2);

	return (0);
}
