/*
** EPITECH PROJECT, 2020
** B-PSU-200-COT-2-1-mysokoban-yemalin.agbangla
** File description:
** progress.c
*/

#include "../include/my_sokoban.h"

void progress_up_up(int i , char **str)
{
    if (i == KEY_UP)
        progress_up(str);
    else return ;
}

void progress_down_down(int i, char **str)
{
    if (i == KEY_DOWN)
        progress_down(str);
    else return ;
}

void progress_left_left(int i, char **str)
{
    if (i == KEY_LEFT)
        progress_left(str);
    else return ;
}

void progress_right_r(int i, char **str)
{
    if (i == KEY_RIGHT)
        progress_right(str);
    else return ;
}