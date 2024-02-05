#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * list_len - returns then number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */




size_t list_len(const list_t *h)
{
int count = 0;
while (h)
{
count++;
h = h->next;

return count;
}
}
