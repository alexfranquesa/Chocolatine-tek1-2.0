/*
** EPITECH PROJECT, 2022
** main
** File description:
** main function for pushswap
*/

#include "push_swap.h"

int main(int argc, char **argv)
{
    if (argc < 2)
        return (84);
    return (push_swap(argc, argv));
}
