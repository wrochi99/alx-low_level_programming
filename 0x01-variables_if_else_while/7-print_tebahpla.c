/* include libraries */
#include <stdio.h>
/*
 * main function - print lowercase alphabet in reverse
 *
 * return 0 (successful)
 */
int main(void)
{
	/* declar var_name and type */
	char reverseAlphabet;
	/* for loop */
	for (reverseAlphabet = 'z'; reverseAlphabet >= 'a'; ++reverseAlphabet)
	{
		putchar(reverseAlphabet);
	}
	putchar('\n');
	return(0);
}
