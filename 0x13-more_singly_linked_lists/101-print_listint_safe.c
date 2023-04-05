#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - this function Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: then set a  pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped to 0.
 * Otherwise - else get the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *top, *bottom;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	top = head->next;
	bottom = (head->next)->next;

	while (bottom)
	{
		if (top == bottom)
		{
			top = head;
			while (top != bottom)
			{
				nodes++;
				top = top->next;
				bottom = bottom->next;
			}

			top = top->next;
			while (top != bottom)
			{
				nodes++;
				top = top->next;
			}

			return (nodes);
		}

		top = top->next;
		bottom = (bottom->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - a function that Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
