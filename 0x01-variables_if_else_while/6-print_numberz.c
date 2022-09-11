/* include libraries */
#include <stdio.h>
/**
 * main - print numbers with putchar
 * numbers: random interger
 *
 * Return: 0
 */
int main(void)
{
	/* declare var_name */
	int printNum;
	/* for loop */
	for (printNum = '0'; printNum <= '9'; printNum++)
	{
		putchar(printNum);
	}
	putchar('\n');
	return (0);
}
