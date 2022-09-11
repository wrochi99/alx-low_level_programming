/* Include relevant library */
#include <stdio.h>
/**
 * main - print alphabet in lowercase using only putchar
 * alphabet: random character
 *
 * Return: 0
 */
int main(void)
{
	/* declare character to assign alphabet to */
	char alphabet;
	/* for loop */
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		/* only allowed to use putchar */
		putchar(alphabet);
	}
	/* only allowed to use putchar twice */
	putchar('\n');
	return (0);
}
