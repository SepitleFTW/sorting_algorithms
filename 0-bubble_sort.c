#include "sort.h"

/**
 * swap_ints - swap two integers
 * @a: integer to swap
 * @b: integer to swap
*/
void swap_ints(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}

/**
 * bubble_sort - bubble sort arrays in asc order
 * @array: array of ints to sort
 * @size: size of the array
 * Description: sort arrays in asc order
*/

void bubble_sort(int *array, size_t size)
{
size_t i, len = size;
bool bubbly = false;

if (array == NULL || size < 2)
    return;

while (bubbly == false)
{
    bubbly = true;
    for (j = 0; j < len - 1; j++)
        {
            if (arry[j] > array[j + 1])
            {
                swap_ints(array +j, array + j + 1);
                print_arraay(array, size);
                bubbly = false;
            }
        }
        len--;
    }
}
