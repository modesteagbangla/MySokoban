/*
** EPITECH PROJECT, 2020
** B-PSU-200-COT-2-1-mysokoban-yemalin.agbangla
** File description:
** check_losing.c
*/

#include "../include/my_sokoban.h"

void compare_checker(char **str, int compt, int cmpt)
{
    if (compt == cmpt) {
        endwin();
        my_release(str);
        exit (1);
    }
    else return ;
}

void approval_losing(char **str)
{
    int compt = 0, cmpt = 0;

    for (int i = 0; str[i] != NULL; i++)
        for (int j = 0; str[i][j] != '\0'; j++)
            if (str[i][j] == 'X')
                compt++;
    for (int i = 0; str[i] != NULL; i++)
        for (int j = 0; str[i][j] != '\0'; j++)
            if (str[i][j] == 'X') {
                if ((str[i - 1][j] == '#' && str[i][j - 1] == '#') ||
                    (str[i - 1][j] == '#' && str[i][j + 1] == '#') ||
                    (str[i + 1][j] == '#' && str[i][j - 1] == '#') ||
                    (str[i + 1][j] == '#' && str[i][j + 1] == '#'))
                    cmpt++;
                else continue ;
            }
    compare_checker(str, compt, cmpt);
    return ;
}
