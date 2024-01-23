#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - displays the array
 *
 * @array: array to display
 * @size: number of elements in the array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	j = 0;
	while (array && j < size)
	{
		if (j > 0)
			printf(", ");
		printf("%d", array[j]);
		++j;
	}
	printf("\n");
}
