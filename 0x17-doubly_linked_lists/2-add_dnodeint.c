#include "lists.h"
/**
  * add_dnodeint - add node at beginning
  * @head: first node
  * @n: data
  * Return: address of the new element, or NULL
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nw;

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);
	nw->n = n;
	nw->prev = NULL;
	nw->next = *head;
	if (*head != NULL)
		(*head)->prev = nw;
	*head = nw;
	return (nw);
}
