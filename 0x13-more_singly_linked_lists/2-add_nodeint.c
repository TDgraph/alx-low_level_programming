#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: set a pointer to the first node in the list
 * @n: add_nodeint
 * n: let n be the constant
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

