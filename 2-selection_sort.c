#include "sort.h"

/**
 * selection_sort - a function
 *
 * @array: param
 *
 * @size: param
 */
void selection_sort(int *array, size_t size)
{
	int temporary = 0;
	size_t idx, j = 0, pos = 0;

	if (array == NULL || size == 0)
		return;

	for (idx = 0; idx < size - 1; idx++)
	{
		pos = idx;
		for (j = idx + 1; j < size; j++)
		{
			if (array[j] < array[pos])
				pos = j;
		}
		if (pos != idx)
		{
			temporary = array[idx];
			array[idx] = array[pos];
			array[pos] = temporary;
			print_array(array, size);
		}
	}
}
