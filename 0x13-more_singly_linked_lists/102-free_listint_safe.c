#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: A pointer to the head of the list to be freed.
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *thisNode, *tmp;

	if (h == NULL)
		return (0);

	thisNode = *h;
	while (thisNode != NULL)
	{
		size++;
		tmp = thisNode;
		thisNode = thisNode->next;
		free(tmp);

		if (tmp <= thisNode)
			break;
	}

	*h = NULL;

	return (size);
}
