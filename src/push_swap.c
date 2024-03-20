/*
** EPITECH PROJECT, 2022
** push_swap
** File description:
** principal function for push_swap
*/

#include "push_swap.h"

int push_swap(int argc, char **argv) {
    node_t *l_a = NULL;
    node_t *l_b = NULL;


    if (argc == 2)
        return (check_two_arg(argv[1]));
    if (check_valid_arg(argv) == 0) {

        return(84);
    }
    l_a = create_list(argv, l_a);
    l_a = go_first_elem(l_a);
    if (is_sorted(l_a) == 1) {
        my_putchar('\n');
        return (0);


        
        
    }
    l_a = go_first_elem(l_a);
    sort_list(l_a, l_b);
    my_putchar('\n');

    return (0);
}

int hello1() {
    return (0);
}
int hello2() {
    return (0);
}
int hello3() {
    return (0);
}
int hello4() {
    return (0);
}
int hello5() {
    return (0);
}
int hello6() {
    return (0);
}