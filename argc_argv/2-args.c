#include "main.h"
/**
 *main - prints all arguments it receives
 *@argc: number of the arguments
 *@argv: array of arguments
 *Return: End
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
