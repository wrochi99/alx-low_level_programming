/* include libraries */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- print the last digit of variable n stored
 * n: random interger
 *
 * Return: 0
 */
int main(void)
{
		int n;
		char lastDigit[] = "Last digit of";

		srand(time(0));
		n = rand() - RAND_MAX / 2;

		printf("%s %d is %d and is ", lastDigit, n, n % 10);
		if (n > 5)
		{
			printf("greater than 5\n");
		}
		else  if (n == 0)
		{
			printf("is 0\n");
		}
		else
		{
			printf("less than 6 and not 0\n");
		}
		return (0);
}
