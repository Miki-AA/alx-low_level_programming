#include "main.h"
#include <stdlib.h>

/**
 * create_array - creat array assigns 'c' to each element
 * @size: size of the array
 * @c: character to assign
 *
 * Description:creates an array of size 'size' and assigns the
 * character 'c' to each element.
 *
 * Return: Pointer to the array, NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
