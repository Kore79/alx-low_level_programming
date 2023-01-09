#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid-returns a pointer to a 2 dimensional array
 * @width:int parameter
 * @height:int parameter
 * Return:pointer or null
 */
int **alloc_grid(int width, int height)
{
	int **m_array, x, y;
	int len = width * height;

	if (len <= 0)
		return (NULL);

	m_array = (int **)malloc(sizeof(int *) * height);
	if (m_array == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		m_array[x] = (int *)malloc(sizeof(int) * width);
		if (m_array[x] == NULL)
		{
			for (x--; x >= 0; x--)

				free(m_array[x]);
			free(m_array);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			m_array[x][y] = 0;

	return (m_array);

}
