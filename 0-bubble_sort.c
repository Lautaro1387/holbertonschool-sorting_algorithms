#include "sort.h"
/**
 * bubble_sort - Algorithm using the bubble sort.
 * @array: array.
 * @size: size.
 */
void bubble_sort(int *array, size_t size)
{	
	int i, temp, sort;

	while (sort == 0)
	{
		for (i = 0; i < array[i]; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
		print_array(array, size);
		sort++;
	}
}
