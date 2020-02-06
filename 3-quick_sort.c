#include "sort.h"

/**
 * swap -  Swap two numbers
 * @a: number array one
 * @b: number array two
 *
 * Return: nothing
 */

void swap(int *a, int *b)
{
int t = *a;
*a = *b;
*b = t;
}


/**
 * partition -  Sorted the array
 * @arr: array to sort
 * @low: Starting index
 * @high: Ending index
 * @size: size the array
 * Return: nothing
 */

int partition(int arr[], int low, int high)
{
int pivot = arr[high];
int i = (low - 1);

for (int j = low; j <= high - 1; j++)
{
if (arr[j] < pivot)
{
i++;
swap(&arr[i], &arr[j]);
}
}
swap(&arr[i + 1], &arr[high]);
return (i + 1);
}

/**
 * quickSort -  function that implements QuickSort
 * @arr: array to sort
 * @low: Starting index
 * @high: Ending index
 * @size: size the array
 * Return: nothing
 */

void quickSort(int arr[], int low, int high, int size)
{
if (low < high)
{
int pi = partition(arr, low, high);
print_array(arr, size);
quickSort(arr, low, pi - 1, size);
quickSort(arr, pi + 1, high, size);
}
}

/**
 * quick_sort -  function that implements QuickSort
 * @array: array to sort
 * @size: size the array
 * Return: nothing
 */

void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
{
return;
}
quickSort(array, 0, size - 1, size);
}