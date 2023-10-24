#include "lists.h"
/**
 *print_listint - print the int data in a singly linked list
 *@h: head pointer to the list
 *Return: counted number of node in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t strcount;

	if (h == NULL)
		return (0);
	for (strcount = 0; h != NULL; strcount++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (strcount);
}
