#include "sort.h"
/**
 * quick_sort - Sorts an array.
 * @array: array.
 * @size: size.
 */
void quick_sort(int *array, size_t size)
{
	if (!array)
		return;

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

	if (max - min > 0)
	{
		pivote = quick_part(array, size, min, max);
		quick_recursion(array, size, min, pivote - 1);
		quick_recursion(array, size, pivote + 1, max);
	}
}
/**
 * quick_part - Function.
 * @array: array.
 * @size: size.
 * @min: left.
 * @max: right.
 * Return: int.
 */
int quick_part(int *array, size_t size, int min, int max)
{

	int *pivote, temp, aux;

	pivote = array + max;
	for (temp = aux = min; aux < max; aux++)
	{
		if (array[aux] < *pivote)
		{
			if (temp < aux)
			{
				swap(array + aux, array + temp);
				print_array(array, size);
			}
			temp++;
		}
	}

	if (array[temp] > *pivote)
	{
		swap(array + temp, pivote);
		print_array(array, size);
	}

	return (temp);
}
/**
 * swap - swap.
 * @array: array.
 * @size: size.
 * @min: left.
 * @max: right.
 */
void swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
