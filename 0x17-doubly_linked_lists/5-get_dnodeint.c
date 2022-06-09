#include "lists.h"
/**
  * get_dnodeint_at_index - get nth node
  * @head: list
  * @index: index of node to get
  * Return: the nth node or NULL
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
