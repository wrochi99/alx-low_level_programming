#include <stdio.h>

/**
 * main - print 1 - 100
 * filter out divisibles of 3 and 5
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i >= 0; i <=100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("FizzBuzz");
		}
		else if (((i % 3) == 0) && ((i % 5) != 0))
		{
			printf("Fizz");
		}
		else if (((i % 5) == 0) && ((i % 3) != 0))
		{
			printf("Buzz");
		}
		else 
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
