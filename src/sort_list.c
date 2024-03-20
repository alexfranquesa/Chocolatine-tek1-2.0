/*
** EPITECH PROJECT, 2022
** sort_list
** File description:
** function utils to do op for sorting
*/

#include "push_swap.h"
#include <unistd.h>

node_t *cond_rotate_end(node_t *l_a, int pos_nb, int len_l_a)
{
    if (pos_nb > (len_l_a / 2)) {
        rotate_end(&l_a);
        write(1, "rra ", 4);
    } else {
        rotate_begin(&l_a);
        write(1, "ra ", 3);
    }
    return (l_a);
}

node_t *cond_swap(node_t *l_a)
{
    if (l_a->data > l_a->next->data) {
        l_a = swap(l_a);
        write(1, "sa ", 3);
    }
    return (l_a);
}

void cond_pa(node_t *l_a, node_t *l_b, int len_l_a, int len_l_b)
{
    while (len_l_b > 1) {
        push(&l_a, &l_b);
        write(1, "pa ", 3);
        len_l_b--;
    }
    if (len_l_b == 1)
        write(1, "pa", 2);
}

void sort_list(node_t *l_a, node_t *l_b)
{
    int len_l_a = len_linklist(l_a);
    int len_l_b = 0;
    int min_nb = 0;
    int pos_nb = 0;

    while (len_l_a > 2) {
        pos_nb = pos_min_nb(l_a, &min_nb);
        while (l_a->data != min_nb) {
            l_a = cond_rotate_end(l_a, pos_nb, len_l_a);
        }
        if (len_l_b == 0 && is_sorted(l_a) == 1)
            return;
        push(&l_b, &l_a);
        write(1, "pb ", 3);
        len_l_a--;
        len_l_b++;
    }
    l_a = cond_swap(l_a);
    cond_pa(l_a, l_b, len_l_a, len_l_b);
}
