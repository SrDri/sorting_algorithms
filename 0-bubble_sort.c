#include "sort.h"

/**
 * bubble_sort - bubble_sort algorithms
 * @array: array sorted
 * @size: the size array
*/

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t num_ord = 0;
	int aux;

	if (array == NULL || size < 2)
	{
		return;
	}

	if (array != NULL)
	{
		while (num_ord < size - 1)
		{
			for (i = 0, num_ord = 0; i < size - 1; i++)
			{
				if (array[i] > array[i + 1])
				{
					aux = array[i];
					array[i] = array[i + 1];
					array[i + 1] = aux;
					print_array(array, size);
				}
				else
					num_ord++;
			}
		}
	}
}
