/*
** EPITECH PROJECT, 2022
** push_swap
** File description:
** header for push_swap
*/

#ifndef PUSH_SWAP_H
    #define PUSH_SWAP_H

    #include "my.h"
    #include <stdio.h>

    // Structure
    typedef struct node_s {
        int data;
        struct node_s *next;
        struct node_s *prev;
    } node_t;

    // Prototypes
    int push_swap(int argc, char **argv);
    int check_two_arg(char *str);
    int check_valid_arg(char **argv);
    node_t *fill_list (node_t *l_a, int nb);
    node_t *create_list(char **argv, node_t *l_a);
    int is_sorted(node_t *l);
    node_t *go_first_elem(node_t *l);
    node_t *go_last_elem(node_t *l);
    node_t *swap(node_t *l);
    int push(node_t **l_dest, node_t **l_src);
    void rotate_end(node_t **l);
    void rotate_begin(node_t **l);
    int len_linklist(node_t *l);
    int pos_min_nb(node_t *l, int *data);
    void dis_linklist(node_t *l);
    void sort_list(node_t *l_a, node_t *l_b);

#endif /* !PUSH_SWAP_H */
