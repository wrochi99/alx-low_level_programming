/* include libraries */
#include <stdio.h>
/**
 * main - print numbers
 * numbers: random interger
 *
 * Return: 0
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
