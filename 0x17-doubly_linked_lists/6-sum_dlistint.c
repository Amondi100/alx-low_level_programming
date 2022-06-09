#include "lists.h"
/**
  * sum_dlistint - sum total of data
  * @head: list
  * Return: sum of all the data (n), or 0
  */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
