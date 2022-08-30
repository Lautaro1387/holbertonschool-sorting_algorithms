#include "sort.h"
/**
 * quick_sort - Sorts an array.
 * @array: array.
 * @size: size.
 */
void quick_sort(int *array, size_t size)
{
	quick_recursion(array, size, 0, size - 1);
}
/**
 * quick_recursion - Function of recursion.
 * @array: array.
 * @size: size.
 * @min: left.
 * @max: right.
 */
void quick_recursion(int *array, size_t size, int min, int max)
{
	int pivote;

	if (min < max)
	{
		pivote = quick_part(array, size, min, max);
		quick_recursion(array, size, min, pivote - 1);
		quick_recursion(array, size, pivote + 1, max);
	}
}
/**
 * quick_recursion - Function.
 * @array: array.
 * @size: size.
 * @min: left.
 * @max: right.
 */
int quick_part(int *array, size_t size, int min, int max)
{
	int r, i = min - 1;
	int pivote = array[max];

	for (r = min; r <= max; r++)
	{
		if (array[r] < pivote)
		{
			r++;
			swap(array, size, i, r);
		}
	}
	swap(array, size, i + 1, max);

	return (i + 1);
}
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
