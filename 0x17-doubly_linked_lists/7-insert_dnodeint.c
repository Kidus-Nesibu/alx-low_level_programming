#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given index of a
 *                            doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node to be deleted (starting from 0).
 *
 * Return: 1 if the deletion was successful, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head;
    dlistint_t *temp = NULL;
    unsigned int i = 0;

    /* If the list is empty, return failure */
    if (*head == NULL)
        return -1;

    /* Special case: if the node to be deleted is the head node */
    if (index == 0)
    {
        *head = current->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return 1;
    }

    /* Traverse the list to find the node at the given index */
    while (current != NULL && i < index)
    {
        temp = current;
        current = current->next;
        i++;
    }

    /* If the index is out of range, return failure */
    if (current == NULL)
        return -1;

    /* Update the links to bypass the node to be deleted */
    temp->next = current->next;
    if (current->next != NULL)
        current->next->prev = temp;

    /* Free the memory allocated to the node */
    free(current);

    return 1;
}

