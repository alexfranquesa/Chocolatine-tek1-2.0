/*
** EPITECH PROJECT, 2022
** fill_list
** File description:
** fill the list with the arg
*/

#include "push_swap.h"

node_t *ini_list(node_t *l_a, int nb)
{
    l_a = malloc(sizeof(node_t));
    l_a->data = nb;
    l_a->prev = NULL;
    l_a->next = NULL;
    return (l_a);
}

node_t *fill_list(node_t *l_a, int nb)
{
    if (!l_a)
        return (ini_list(l_a, nb));

    node_t *l_temp = l_a;

    l_a = l_a->next;
    l_a = malloc(sizeof(node_t));
    l_a->data = nb;
    l_a->prev = l_temp;
    l_temp->next = l_a;
    l_a->next = NULL;
    return (l_a);
}

node_t *create_list(char **argv, node_t *l_a)
{
    int i = 1;

    while (argv[i]) {
        l_a = fill_list(l_a, my_getnbr(argv[i]));
        i++;
    }
    return (l_a);
}
