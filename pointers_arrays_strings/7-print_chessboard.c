#include "main.h"

/**
 *  print_chessboard - function that prints the chessboard.
 *  @a: Entry double array.
 */
void print_chessboard(char (*a)[8])
{
	int n_1, n_2;

	for (n_1 = 0; n_1 < 8; n_1++)
	{
		for (n_2 = 0; n_2 < 8; n_2++)
		{
			_putchar(a[n_1][n_2]);
		}
		_putchar('\n');
	}
}
