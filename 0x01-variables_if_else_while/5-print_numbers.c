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
	/* declare var_name */
	char printNum;
	
	/* for loop */
	for (printNum = '0'; printNum <= '9'; printNum++)
	{
		putchar(printNum);
	}
	
	putchar('\n');
	return (0);
}
