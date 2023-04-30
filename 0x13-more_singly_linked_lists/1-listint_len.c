#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: instance of struct list data type
 * Return: number of n.
 */
size_t listint_len(const listint_t *h)
{
int n = 0;
for (n = 0; h; n++)
h = h->next;
return (n);
}
