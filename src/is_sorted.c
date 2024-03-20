/*
** EPITECH PROJECT, 2022
** is_sorted
** File description:
** function to check if linked list is sorted
*/

#include "push_swap.h"

int is_sorted(node_t *l)
{
    int data = 0;

    while (l->next) {
        data = l->data;
        l = l->next;
        if (l->data < data)
            return (0);
    }
    return (1);
}
