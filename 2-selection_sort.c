#include "sort.h"

/**
 * selection_sort - selection_sort algorithms
 * @array: array sorted
 * @size: the size array
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	size_t num_min = 0;
	size_t siguien;
	int aux;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		num_min = i;
		siguien = i + 1;
		
		for (j = siguien; j < size; j++)
		{
			if (array[num_min] > array[j])
			{
				num_min = j;
			}
		}
		aux = array[i];
		array[i] = array[num_min];
		array[num_min] = aux;
		print_array(array, size);
	}
}
