#include "sort.h"
/**
 * bubble_sort - Algorithm using the bubble sort.
 * @array: array.
 * @size: size.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp = size, sort = 0;

	while (1)
	{
		sort = 0;
		for (i = 1; i < size - 1; i++)
		{
			for (j = 1; j < size - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					sort = 1;
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
					print_array(array, size);
				}
			}
		}
		if (sort == 0)
			break;
	}
}
