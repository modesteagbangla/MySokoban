/*
** EPITECH PROJECT, 2020
** B-PSU-200-COT-2-1-mysokoban-yemalin.agbangla
** File description:
** usage.c
*/

#include "../include/my_sokoban.h"

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}

int usage(int ac, char **av)
{
    if (ac == 2) {
        if (i_compare(av[1], "-h") == 0) {
            my_putstr("USAGE\n");
            my_putstr("     ./my_sokoban map\n");
            my_putstr("DESCRIPTION\n");
            my_putstr("     map file representing the warehouse map, ");
            my_putstr("containing '#' for walls,\n");
            my_putstr("         'P' for the player, 'X' for ");
            my_putstr("boxes and 'O' for storage locations.\n");
        } else
            return (84);
    } else
        return (84);
    return (0);
}
