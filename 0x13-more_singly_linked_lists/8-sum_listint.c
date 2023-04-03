#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data(n) in a listint_t list
 * @head: pointer to the head of the linked list
 *
 * Return: resulting sum , or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *thisNode = head;

	while (thisNode != NULL)
	{
		sum += thisNode->n;
		thisNode = thisNode->next;
	}

	return (sum);
}
