#include "main.h"

/**
 * create_array - creates array of characters
 * initializing it with a specific character
 * @size: size of array
 * @c: char to be inserted 
 *
 * Return: NULL if 0/error else pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}

	return (array);
}
