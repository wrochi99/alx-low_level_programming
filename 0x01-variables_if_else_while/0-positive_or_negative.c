/*Include relevant, necessary libraries*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
 * main - printing
 * description - function is to print positive or negative
 * return Always 0 (succesful)
 *
 */

/* main function - printing */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*If statement for positive number*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	/*ElseIf statement for 0*/
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	/*Else statement for negative number*/
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
