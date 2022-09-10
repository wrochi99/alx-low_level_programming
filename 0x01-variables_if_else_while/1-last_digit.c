/* Include relevant libraries */

#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/*
 * main - print last digit of random number and
 * main - whether n is greater than five, zero, or less than six and not zero
 */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* declare variable for last digit */
		char lastDigit[] = "Last digit of";

		printf("%s %d is %d and is ", lastDigit, n, n % 10);
		/* If statement for n is greater than five */
		if (n % 10 > 5)
		{
			printf("greater than 5\n");
		}
		/* ElseIf statement for n is zero */
		else if (n % 10 == 0)
		{
			printf("0\n");
		}
		/* Else statement for the rest */
		else
		{
			printf("less than 6 and not 0\n");
		}
		return (0);
}
