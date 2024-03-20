/*
** EPITECH PROJECT, 2022
** count_lists
** File description:
** function utils to count things in a linkedlist
*/

#include "push_swap.h"

int len_linklist(node_t *l)
{
    int len = 0;
    node_t *aux = NULL;

    if (!l)
        return (0);
    aux = malloc(sizeof(node_t));
    aux = l;
    while (aux) {
        len++;
        aux = aux->next;
    }
    free(aux);
    return (len);
}

void dis_linklist(node_t *l)
{
    node_t *aux = NULL;

    if (!l)
        return;
    aux = malloc(sizeof(node_t));
    aux = l;
    while (aux) {
        my_put_nbr(aux->data);
        my_putchar('\n');
        aux = aux->next;
    }
    free(aux);
}

int pos_min_nb(node_t *l, int *data)
{
    node_t *aux = NULL;
    int pos = 1;
    int count = 1;

    aux = malloc(sizeof(node_t));
    aux = l;
    if (aux->prev != NULL)
        aux = go_first_elem(aux);
    (*data) = aux->data;
    aux = aux->next;
    while (aux) {
        if (aux->data < *data) {
            (*data) = aux->data;
            pos = count;
        }
        count++;
        aux = aux->next;
    }
    free(aux);
    return (pos);
}
