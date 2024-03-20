/*
** EPITECH PROJECT, 2022
** check_fts
** File description:
** function utils to check things and do err handling
*/

#include "push_swap.h"

int check_two_arg(char *str)
{
    if (my_str_isnum(str) == 1) {
        my_putchar('\n');
        return (0);
    }
    return (84);
}

int check_valid_arg(char **argv)
{
    int i = 1;

    while (argv[i]) {
        if (my_str_isnum(argv[i]) == 0)
            return (0);
        i++;
    }
    return (1);
}
