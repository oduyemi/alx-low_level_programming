#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to retrieve, starting at 0
 *
 * Return: pointer to the nth node, or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *thisNode = head;
	size_t j;

	for (j = 0; thisNode != NULL && j < index; j++)
	{
		thisNode = thisNode->next;
	}

	return (thisNode);
}
