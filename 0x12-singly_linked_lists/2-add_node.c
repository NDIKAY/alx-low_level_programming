#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_node - Function to add node at the beginning
 *@head: node head
 *@str: string to be stored
 *Return: adress of new element or null
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i, count = 0;

	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newnode->len = count;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}

