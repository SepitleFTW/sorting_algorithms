#include <stdio.h>
#include "sort.h"

/**
 * print_list - prints all the ints
 *
 * @list: list of ints
 **/
void print_list(const listint_t *list)
{
	int ii;

	ii = 0;
	while (list)
	{
		if (ii > 0)
			printf(", ");
		printf("%d", list->n);
		++ii;
		list = list->next;
	}
	printf("\n");
}
