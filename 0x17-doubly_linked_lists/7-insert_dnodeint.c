#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the pointer to the head of the doubly linked list.
 * @idx: Index where the new node should be added (starting from 0).
 * @n: Value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *current;
    unsigned int i;

    if (h == NULL)  /* Check if the pointer to the head is NULL */
        return NULL;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = n;  /* Assign the value to the new node */
    new_node->prev = NULL;
    new_node->next = NULL;

    /* Special case: if the new node is to be inserted at the beginning */
    if (idx == 0)
    {
        new_node->next = *h;
        if (*h != NULL)
            (*h)->prev = new_node;
        *h = new_node;
        return new_node;
    }

    current = *h;
    /* Traverse the list to find the node at the given index */
    for (i = 0; i < idx - 1 && current != NULL; i++)
    {
        current = current->next;
    }

    /* If the index is out of range, free the allocated memory and return NULL */
    if (current == NULL)
    {
        free(new_node);
        return NULL;
    }

    /* Insert the new node at the given index */
    new_node->next = current->next;
    if (current->next != NULL)
        current->next->prev = new_node;
    current->next = new_node;
    new_node->prev = current;

    return new_node;
}

