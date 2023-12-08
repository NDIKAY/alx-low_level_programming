#include "lists.h"
/**
 *free_dlistint - the function that frees a dlistint-t list
 *@head: head of thee list
 *Return: no one
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp_ptr;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while ((tmp_ptr = head) != NULL)
	{
		head = head->next;
		free(tmp_ptr);
	}
}

