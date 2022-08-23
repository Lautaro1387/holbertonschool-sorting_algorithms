#include "sort.h"
/**
 * bubble_sort - Algorithm using the bubble sort.
 * @array: array.
 * @size: size.
 */
void bubble_sort(int *array, size_t size)
{
	int temp, sort, j = 0;


	while (1)
	{
		sort = 0;
		for (j = 1; (size_t)j < size - 1; j++)
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
	if (sort == 0)
		break;
	}
}
