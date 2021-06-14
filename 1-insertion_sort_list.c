#include "sort.h"

/**
 * insertion_sort_list - insertion sort
 * @list: list
 * Return: void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *actual, *first;
	int i, recorre = 0;

	if (list == NULL)
		return;

	first = *list;
	actual = *list;

	while (actual != NULL)
	{
		recorre++;
		while (actual->prev != NULL)
		{
			if (actual->n < actual->prev->n)
			{
				swap(actual->prev, actual);

				if (actual->prev == NULL)
				{
					first = actual;
					*list = first;
				}
				print_list(*list);
			}
			else
			{
				break;
			}
		}
		for (i = 0; i < recorre; i++)
		{
			if (i == 0)
				actual = first->next;
			else
				actual = actual->next;
		}
	}
}

/**
 * swap - swaps node
 * @prev: previo element
 * @actual: current element
*/
void swap(listint_t *prev, listint_t *actual)
{
	actual->prev = prev->prev;
	prev->next = actual->next;
	prev->prev = actual;
	actual->next = prev;

	if (actual->prev)
		actual->prev->next = actual;
	if (prev->next)
		prev->next->prev = prev;
}
