#include "lists.h"

/**
*listint_len(const listint_t *h)
*@h: head pointer
*Return: the number of elements found in the list
*/
size_t listint_len(const listint_t *h)
{
	int strcount = 0;

	if (h == NULL)
		return (0);
	for (strcount = 0; h != NULL; strcount++)
	{
		h = h->next;
	}
	return (strcount);
}

