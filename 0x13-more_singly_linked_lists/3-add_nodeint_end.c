#include "lists.h"

/**
* add_nodeint_end - a function that adds a new node at the end
* of a listint_t list
* @head: the head of the listint_t list
* @n: the data to be added to the new node
* Return: returns the address of the new element, or NULL if failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *rad;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	rad = *head;

	if (*head == NULL)
	{
		new->next = NULL;
		new->n = n;
		*head = new;

		return (new);
	}
	while (rad->next != NULL)
	{
		rad = rad->next;
	}

	new->next = NULL;
	new->n = n;
	rad->next = new;

	return (new);
}
