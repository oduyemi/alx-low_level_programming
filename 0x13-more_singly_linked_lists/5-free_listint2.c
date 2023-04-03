#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the first element in the linked list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *thisNode;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		thisNode = *head;
		*head = (*head)->next;
		free(thisNode);
	}

	*head = NULL;
}
