#include "lists.h"
/**
  * free_dlistint - free list
  * @head: list
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;

	while (head != NULL)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
