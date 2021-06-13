#include "sort.h"

/**
 * bubble_sort - bubble_sort algorithms
 * @array: array sorted
 * @size: the size array
*/

void bubble_sort(int *array, size_t size)
{
	unsigned int i;
	unsigned int num_ord = 0;
	unsigned int aux = 0;

	if (array != NULL)
	{
		while (num_ord < size)
		{
			for (i = 0, num_ord = 0; i < size; i++)
			{
				if (array[i] < array[i + 1])
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
