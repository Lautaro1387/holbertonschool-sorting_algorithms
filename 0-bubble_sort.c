#include "sort.h"
/**
 * bubble_sort - Algorithm using the bubble sort.
 * @array: array.
 * @size: size.
 */
void bubble_sort(int *array, size_t size)
{
	int j, temp, sort;

	while (1)
	{
		sort = 0;
		for (j = 1; (size_t)j < size; j++)
		{
			if (array[j - 1] > array[j])
			{
				sort = 1;
				temp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = temp;
				print_array(array, size);
			}
		}
	if (sort == 0)
		break;
	}
}
