#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */




size_t print_list(const list_t *h)
{
int count = 0;
while (h)
{
if (h->str == NULL) printf("[0] (nil)\n");
else printf("[%d] %s\n", h->len, h->str);
count++;
h = h->next;
}
return count;
}
