#include "main.h"
/**
 *main - prints the number of arguments
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: End
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
