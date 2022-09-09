/* Import our source library */

#include <stdio.h>

/**
 * main - determine and print storage sizes of data types on user's computer
 *
 * Return: Always 0 (successful)
 *
 */
int main(void)
{
	/* list the data types and assign variables */
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	/* print the statements for each variable including required format */
	printf("Size of a char: %d byte(s)\n," sizeof(a));	
	printf("Size of an int: %d byte(s)\n," sizeof(b));
	printf("Size of a long int: %d byte(s)\n," sizeof(c));
	printf("Size of a long long int: %d byte(s)\n," sizeof(d));
	printf("Size of a float: %d byte(s)\n," sizeof(e));
	/* return 0 because 'main' is an 'int' */
	return (0);
}
