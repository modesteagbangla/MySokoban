/*
** EPITECH PROJECT, 2020
** B-PSU-200-COT-2-1-mysokoban-yemalin.agbangla
** File description:
** display_win.c
*/

#include "../include/my_sokoban.h"

void display_win(char **str)
{
    if (check_barrier(str) == 0) {
        endwin();
        my_release(str);
        exit (0);
    }
    return ;
}