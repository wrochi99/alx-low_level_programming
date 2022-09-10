/*Include relevant, necessary libraries*/

#include <stdlib.h>
#include <time.h>

/*main - printing */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*If statement for positive number*/
	if (n > 0)
	{
		printf("%d is positive\n");
	}
	/*ElseIf statement for 0*/
	else if (n == 0)
	{
		printf("%d is 0 and is 0\n");
	}
	/*Else statement for negative number*/
	else
	{
		printf("%d is negative\n");
	}
	return (0);
}
