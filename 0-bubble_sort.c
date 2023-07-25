#include "sort.h"

/**
  * bubble_sort - a function
  *
  * @array: a parameter
  *
  * @size: a parameter
  */
void bubble_sort(int *array, size_t size)
{
	size_t idx, j = 0;
	int temp = 0;

	if (array == NULL || size == 0)
		return;
	for (idx = 0; idx < size - 1; idx++)
	{
		for (j = 0; j < size - idx - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
}
