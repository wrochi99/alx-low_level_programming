/* include libraries */
#include <stdio.h>
/*
 * main function - printing
 *
 * return 0
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
	return(0);
}
