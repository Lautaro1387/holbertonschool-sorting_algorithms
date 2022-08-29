#include "sort.h"
void quick_sort(int *array, size_t size)
/**
 * swap - swap.
 * @array: array.
 * @size: size.
 * @min: left.
 * @max right.
 */
void swap(int *array, size_t size, int min, int max)
{
	int temp;

	if (array[min] != array[max])
	{
		temp = array[min];
		array[min] = array[max];
		array[max] = temp;
		print_array(array, size);
	}
}
