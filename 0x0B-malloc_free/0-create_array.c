#include <stdio.h>
#include <stdlib.h>

/**
 * create_array-create and initialize an array of characters
 * @size:size of array
 * @c:initial value
 * Return:pointer to the array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int x;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		array[x] = c;

	return (array);

}
