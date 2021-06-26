/*
** EPITECH PROJECT, 2020
** B-PSU-200-COT-2-1-mysokoban-yemalin.agbangla
** File description:
** check_win.c
*/

#include "../include/my_sokoban.h"

void check_win(char **temp, char **str)
{
    for (int i = 0; temp[i] != NULL && str[i] != NULL; i++) {
        for (int j = 0; temp[i][j] != '\0' && str[i][j] != '\0'; j++) {
            if (temp[i][j] == 'O' && str[i][j] == 'P')
                return ;
            else if (temp[i][j] == 'O' && (str[i][j] == 'X'))
                continue;
        }
    }
    display_win(str);
    return ;
}
