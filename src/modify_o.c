/*
** EPITECH PROJECT, 2020
** B-PSU-200-COT-2-1-mysokoban-yemalin.agbangla
** File description:
** modify_o.c
*/

#include "../include/my_sokoban.h"

void modify(char **str, int i, char **temp)
{
    progress_up_up(i, str);
    progress_down_down(i, str);
    progress_left_left(i, str);
    progress_right_r(i, str);
    restitute(temp, str);
    clear();
    refresh();
    display_table(str);
}