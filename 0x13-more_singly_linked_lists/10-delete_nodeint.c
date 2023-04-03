#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at the given index in a list.
 * @head: Pointer to a pointer to the first node of the linked list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if the node is successfully deleted, -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node, *thisNode;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		thisNode = *head;
		*head = (*head)->next;
		free(thisNode);
		return (1);
	}

	prev_node = *head;
	thisNode = (*head)->next;

	for (i = 1; thisNode != NULL && i < index; i++)
	{
		prev_node = thisNode;
		thisNode = thisNode->next;
	}

	if (thisNode == NULL)
	return (-1);

	prev_node->next = thisNode->next;
	free(thisNode);

	return (1);
}
