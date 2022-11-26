#include "lists.h"

/**
 * list_len - a function that returns the number of
 * elements in a linked list_t list
* @h: a pointer to the element
* Return: returns the number of elements in h
*/
size_t list_len(const list_t *h)
{
	int a = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str != NULL)
			a++;
		h = h->next;
	}
	return (a);
}
