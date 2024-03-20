/*
** EPITECH PROJECT, 2022
** manage_list
** File description:
** function utils to manage linkedlists
*/

#include "push_swap.h"

node_t *swap(node_t *l)
{
    int temp = l->next->data;

    l->next->data = l->data;
    l->data = temp;
    return (l);
}

int push(node_t **l_dest, node_t **l_src)
{
    node_t *list = NULL;
    int data_temp = 0;

    if (*l_src == NULL)
        return (84);
    list = malloc(sizeof(node_t));
    data_temp = (*l_src)->data;
    (*l_src) = (*l_src)->next;
    free((*l_src)->prev);
    (*l_src)->prev = NULL;

    list->data = data_temp;
    list->next = (*l_dest);
    list->prev = NULL;
    (*l_dest) = list;
    return (0);
}

void rotate_end(node_t **l)
{
    node_t *list = malloc(sizeof(node_t));
    int data_temp = 0;

    (*l) = go_last_elem(*l);
    data_temp = (*l)->data;
    (*l) = (*l)->prev;
    (*l)->next = NULL;
    (*l) = go_first_elem(*l);
    list->data = data_temp;
    list->next = (*l);
    list->prev = NULL;
    (*l)->prev = list;
    (*l) = list;
}

void rotate_begin(node_t **l)
{
    int data_temp = (*l)->data;

    (*l) = (*l)->next;
    (*l)->prev = NULL;
    (*l) = go_last_elem(*l);
    (*l)->next = malloc(sizeof(node_t));
    (*l)->next->data = data_temp;
    (*l)->next->next = NULL;
    (*l)->next->prev = (*l);
    (*l) = go_first_elem(*l);
}
