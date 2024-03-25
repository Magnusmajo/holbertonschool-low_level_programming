#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals
* of a square matrix
* @a: pointer to the first element of the matrix
* @size: size of the matrix
*/
void print_diagsums(int *a, int size)
{
	int i;
	int left = 0, right = 0;

	for (i = 0; i < size; i++)
	{
		left += a[i * size + i];
		right += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", left, right);
}
