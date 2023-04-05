#include "lists.h"

/**
 * find_listint_loop - this function finds the loop in a linked list
 * @head: find linked list loop
 *
 * Return: then return the address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *above = head;
	listint_t *below = head;

	if (!head)
		return (NULL);

	while (below && above && above->next)
	{
		above = above->next->next;
		below = below->next;
		if (above == below)
		{
			below = head;
			while (below != above)
			{
				below = below->next;
				above = above->next;
			}
			return (above);
		}
	}

	return (NULL);
}

