#include "lists.h"

/**
 * add_nodeint - add a new mode at the benining
 * of linked list
 * @head: head of list.
 * @n: n element.
 *
 * Return: Address of the new element. If it fails NULL
 */
listin_t *add_nodeint(listin_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
