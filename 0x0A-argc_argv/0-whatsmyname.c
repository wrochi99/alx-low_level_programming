#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints name of the program
 * followed by a new line
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
