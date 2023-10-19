#include "lists.h"

/**
 *add_node_end - Function to add node to the end of the list
 *@head: head of the node
 *@str: string
 *Return: adress of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i, count = 0;
	list_t *tmp;
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newnode->len = count;
	newnode->next = NULL;
	tmp = *head;

	if (tmp == NULL)

		*head = newnode;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newnode;
	}
	return (*head);
}


