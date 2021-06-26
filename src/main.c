/*
** EPITECH PROJECT, 2020
** B-PSU-200-COT-2-1-mysokoban-yemalin.agbangla
** File description:
** main.c
*/

#include "../include/my_sokoban.h"

int main(int ac, char **av)
{
    if (ac != 2)
        return (84);
    else if (i_compare(av[1], "-h") == 0)
        usage(ac, av);
    else {
        int r = open_file(ac, av);
        if (r == 84)
            return (84);
    }
    exit(0);
}