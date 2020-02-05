#include "sort.h"

/**
 * selection_sort -  Selection sort algorithm
 * @array: array of integers to order
 * @size: size of array
 *
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
size_t i, j;
int min, position, temp, change;
j = 0;
position = 0;

if (array && size > 1)
{
while (j < size)
{
min = array[j];
change = 0;
i = j + 1;
while (i < size)
{
if (min > array[i])
{
min = array[i];
position = i;
change = 1;
}
i++;
}
if (change)
{
temp = array[j];
array[j] = min;
array[position] = temp;
print_array(array, size);
}
j++;
}
}

}
