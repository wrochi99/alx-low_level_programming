/* Include source library */

#include <stdio.h>

/*
 * main - print text without using 'printf' or 'puts'
 *
 * Return: 1 (successful)
 *
 */
int main(void)
{
	/* use 'fwrite' command in place of 'printf' or 'puts' */
	fwrite(2,"and that piece of art is useful\\\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
