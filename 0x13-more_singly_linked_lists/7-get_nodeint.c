#include "lists.h"

/**
* get_nodeint_at_index - a function that returns the nth node of a
* listint_t linked list
* @head: the head of the list
* @index: the index of the node, starting at 0
* Return: returns the nth node of the list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *tmp;

	if (!head)
		return (NULL);

	tmp = head;

	/* Checking if the node exists */
	while (tmp)
	{
		tmp = tmp->next;
		a++;
	}
	if (index >= i)
	/* Then */
	{
		return (NULL);
	}

	a = 0;
	tmp = head;

	/* Moving the tmp pointer to the index position */
	while (tmp && a < index)
	{
		tmp = tmp->next;
		a++;
	}

	return (tmp);
}