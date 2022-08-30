#include "sort.h"

/**
 * insertion_sort_list - sorts an array of int using the Sel-Sort algorithm
 * @list: list to be sorted
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *now, *nowcp;

	if (!list || !(*list))
		return;

	now = *list;
	while (now)
	{
		nowcp = now->next;

		while (now->prev && now->n < now->prev->n)
		{
			now->prev->next = now->next;

			if (now->next)
				now->next->prev = now->prev;

			now->next = now->prev;
			now->prev = now->prev->prev;

			if (now->prev)
				now->prev->next = now;

			now->next->prev = now;

			if (!now->prev)
				*list = now;

			print_list(*list);
		}
		now = nowcp;
	}
}
