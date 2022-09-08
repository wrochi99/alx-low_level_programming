/* Include source library */

#include <stdio.h>

/*
 * printWithoutF - print statement without using 'printf' or 'puts'
 *
 * Return (1) - success
 *
 */

int printWithoutF(void)
{
	/* use 'write' command in place of 'printf' or 'puts' */
	write (2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
