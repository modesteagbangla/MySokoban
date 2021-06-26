/*
** EPITECH PROJECT, 2020
** B-PSU-200-COT-2-1-mysokoban-yemalin.agbangla
** File description:
** progress_right.c
*/

#include "../include/my_sokoban.h"

void progress_right(char **str)
{
    int *pos = find_pos(str, 'P');

    if (str[pos[0]][pos[1] + 1] == '#' || (str[pos[0]][pos[1] + 1] == 'X' &&
        str[pos[0]][pos[1] + 2] == 'X'))
        return ;
    else if (str[pos[0]][pos[1] + 1] != '#') {
        if (str[pos[0]][pos[1] + 1] == 'X' && str[pos[0]][pos[1] + 2]
            && str[pos[0]][pos[1] + 2] != '#') {
            str[pos[0]][pos[1]] = ' ';
            str[pos[0]][pos[1] + 1] = 'P';
            str[pos[0]][pos[1] + 2] = 'X';
        } else if (str[pos[0]][pos[1] + 1] == 'X' &&
            str[pos[0]][pos[1] + 2] == '#')
            return ;
        else {
            str[pos[0]][pos[1]] = ' ';
            str[pos[0]][pos[1] + 1] = 'P';
        }
    }
}
