/* include libraries */
#include <stdio.h>
/*
 * main function - printing
 *
 * return 0 (succcessful)
 */
int main(void)
{
	/* declare var_name and type */
	int printComb;
	for (printComb = '0'; printComb <= '9'; printComb++)
	{
		putchar(printComb);
		if (printComb != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
