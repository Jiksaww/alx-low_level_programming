#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head : pointer to the head of the linked list
 * Return: head node's data (k)
 *         or 0 - if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int k;

	temp = *head;

	if (temp == NULL)
		return (0);
	*head = temp->next;
	k = temp->k;
	free(temp);
	return (k);
}
