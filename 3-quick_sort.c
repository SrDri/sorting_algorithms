#include "sort.h"

/**
 * partition - partition sorts pivot
 * @array: the array
 * @left: left pointer
 * @right: right pointer
 * @size: size
 * Return: void
 */

size_t partition(int *array, int left, int right, size_t size)
{
	int pivot, swap;
	int i, j;

	pivot = array[right];
	i = left - 1;
	for (j = left; j < right; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap = array[i];
				array[i] = array[j];
				array[j] = swap;
				print_array(array, size);
			}
		}
	}
	if (array[right] < array[i + 1])
	{
		swap = array[i + 1];
		array[i + 1] = array[right];
		array[right] = swap;
		print_array(array, size);
	}
	return (i + 1);

}

/**
 * quicksort - recursively calls
 * @array: the array
 * @left: left pointer
 * @right: righ pointer
 * @size: size of leng
 * Return: void
 */
void quicksort(int *array, int left, int right, size_t size)
{
	int pivot;

	if (left < right)
	{
		pivot = partition(array, left, right, size);
		quicksort(array, left, pivot - 1, size);
		quicksort(array, pivot + 1, right, size);
	}
}

/**
 * quick_sort - function that sorts an array of integers in ascending
 * @array: - the array
 * @size: size of length
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quicksort(array, 0, size - 1, size);
}
