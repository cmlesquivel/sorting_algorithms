#include "sort.h"

/**
 * particion -  Sorted the array
 * @arr: array to sort
 * @low: Starting index
 * @high: Ending index
 * @size: size the array
 * Return: nothing
 */

int particion(int arr[], int low, int high, int size)
{
int pivot = arr[high];
int i, j;
int t;

i = (low - 1);

for (j = low; j < high; j++)
{
if (arr[j] < pivot)
{
i++;
if (i != j)
{
t = arr[i];
arr[i] = arr[j];
arr[j] = t;
print_array(arr, size);
}
}
}
if (arr[high] < arr[i + 1])
{
t = arr[i + 1];
arr[i + 1] = arr[high];
arr[high] = t;
print_array(arr, size);
}
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
int pi = particion(arr, low, high, size);

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
