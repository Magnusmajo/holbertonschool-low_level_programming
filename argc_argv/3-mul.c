#include "main.h"
/**
 *main - Multiplies two numbers
 *@argc: numbers of an argument
 *@argv: list of an array
 *Return: Error 1, end 0
 */
int main(int argc, char *argv[])
{
	int n1, n2, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mult = n1 * n2;

	printf("Result: %d\n", mult);

	return (0);

}
