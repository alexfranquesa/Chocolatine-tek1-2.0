/*
** EPITECH PROJECT, 2022
** move_list
** File description:
** function utils to go at the first or at last linkedlist's element
*/

#include "push_swap.h"

node_t *go_first_elem(node_t *l)
{
    while (l->prev) {
        l = l->prev;
    }
    return (l);
}

node_t *go_last_elem(node_t *l)
{
    while (l->next) {
        l = l->next;
    }
    return (l);
}
