#include "sort.h"

/**
 * insertion_sort_list -  insertion sort algorithm for list
 * @list: Doubly linked list
 *
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
listint_t *aux;
listint_t *temp1, *temp2;
if (list != NULL)
{
aux = (*list)->next;
temp2 = aux;

while (temp2)
{
while (aux->n < aux->prev->n)
{
temp1 = aux->prev;

aux->prev = temp1->prev;
temp1->next = aux->next;
if (temp1->next != NULL)
{
temp1->next->prev = temp1;
}

aux->next = temp1;
temp1->prev = aux;

if (aux->prev == NULL)
{
*list = aux;
print_list(*list);
break;
}
else
{
aux->prev->next = aux;
print_list(*list);
}
}
temp2 = temp2->next;
aux = temp2;
}
}
}
