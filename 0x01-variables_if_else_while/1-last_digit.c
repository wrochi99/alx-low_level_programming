/* include libraries */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - printing
 * description - printing last digit
 * description - confirming whether it's greater than 5
 * description - confirming if it's zero
 * description - confirming if it's less than 6 and not 0
 *
 * return 0 (successful)
 */
int main(void)
{
		int n;
		char lastDigit[]= "Last digit of";

		srand(time(0));
		n = rand() - RAND_MAX / 2;

		/* my code */
		/* declare var_name */
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
