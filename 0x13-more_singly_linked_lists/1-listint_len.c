#include "lists.h"

/*listin_len  - returns the number of elements in
 * a linked list.
 * @h: head of a list.
 *
 * Return: number of nodes.
 */
size_t listint_len(const listnt_t *h)
{
	size_t nnodes = 0;

	while (h!= NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
