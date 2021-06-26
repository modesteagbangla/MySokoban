/*
** EPITECH PROJECT, 2020
** B-PSU-200-COT-2-1-mysokoban-yemalin.agbangla
** File description:
** progress_down.c
*/

#include "../include/my_sokoban.h"

void progress_down(char **str)
{
    int *pos = find_pos(str, 'P');

    if (str[pos[0] + 1][pos[1]] == '#' || (str[pos[0] + 1][pos[1]] == 'X' &&
        str[pos[0] + 2][pos[1]] == 'X'))
        return ;
    else if (str[pos[0] + 1][pos[1]] != '#') {
        if (str[pos[0] + 1][pos[1]] == 'X' && str[pos[0] + 2][pos[1]] &&
            str[pos[0] + 2][pos[1]] != '#') {
            str[pos[0]][pos[1]] = ' ';
            str[pos[0] + 1][pos[1]] = 'P';
            str[pos[0] + 2][pos[1]] = 'X';
        } else if (str[pos[0] + 1][pos[1]] == 'X' &&
            str[pos[0] + 2][pos[1]] == '#')
            return ;
        else {
            str[pos[0]][pos[1]] = ' ';
            str[pos[0] + 1][pos[1]] = 'P';
        }
    }
}
