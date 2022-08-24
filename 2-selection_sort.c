#include "sort.h"
/**
 * selection_sort - Function.
 * @array: array.
 * @size: size.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, min, order;


	if (!array)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				order = j;
			}
		}
			temp = array[i];
			array[i] = min;
			array[order] = temp;
			print_array(array, size);
	}
}
