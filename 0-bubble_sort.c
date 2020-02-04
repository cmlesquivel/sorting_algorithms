#include "sort.h"

/**
 * bubble_sort -  Bubble sort algorithm
 * @array: array of integers to order
 * @size: size of array
 *
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t j, n;
	int actual;

	if (array && size > 1)
	{
		for (n = 1; n < size; n++)
		{
			j = 1;
			while (j < size)
			{
				actual = array[j];
				if (array[j - 1] > actual)
				{
					array[j] = array[j - 1];
					array[j - 1] = actual;
					print_array(array, size);
				}
				j++;
			}
		}
	}
}
