#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: head of a list
 * @index: index of the node
 *
 * Return: nth node. if node doesn't exist, returns NULL
 */
listin_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for ( i = 0; i < index && head != NULL; i++0
	{
		head = head->next;
	}

	return (head);
}
