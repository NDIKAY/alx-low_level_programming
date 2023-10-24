#include "lists.h"
/**
 *free_listint - to free a linked list
 *@head: pointer to the first node of the list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}

}

