#include "lists.h"
/**
  * add_dnodeint_end - add node at end of list
  * @head: current first node
  * @n: data
  * Return: address of the new element, or NULL
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nw, *ls;

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);
	nw->n = n;
	nw->next = NULL;
	if (*head == NULL)
	{
		nw->prev = NULL;
		*head = nw;
		return (nw);
	}
	ls = *head;
	while (ls->next != NULL)
		ls = ls->next;
	ls->next = nw;
	nw->prev = ls;
	return (nw);
}
