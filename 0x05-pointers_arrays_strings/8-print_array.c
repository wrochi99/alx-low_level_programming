#include "main.h"
/**
 * print_array - print elements of array of int
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - l)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
	return(0);
}
