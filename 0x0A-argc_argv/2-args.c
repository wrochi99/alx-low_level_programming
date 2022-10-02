#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * including argv[0] and each argument is printed
 * on it's own line
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
