#include "sort.h"

/**
 * quick_sort - a function
 *
 * @array: param
 *
 * @size: param
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quick_s(array, 0, size - 1, size);
}

/**
 * partition - function
 *
 * @array: param
 * @lo: param
 * @hi: param
 * @size: param
 *
 * Return: index
 */
int partition(int *array, int lo, int hi, size_t size)
{
	int i = lo - 1, j = lo;
	int myPivot = array[hi], aux = 0;

	for (; j < hi; j++)
	{
		if (array[j] < myPivot)
		{
			i++;
			if (array[i] != array[j])
			{
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[hi])
	{
		aux = array[i + 1];
		array[i + 1] = array[hi];
		array[hi] = aux;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quick_s - function
 *
 * @array: param
 * @lo: param
 * @hi: param
 * @size: param
 */
void quick_s(int *array, int lo, int h, size_t size)
{
	int myPivot;

	if (lo < h)
	{
		myPivot = partition(array, lo, h, size);
		quick_s(array, lo, myPivot - 1, size);
		quick_s(array, myPivot + 1, h, size);
	}
}
