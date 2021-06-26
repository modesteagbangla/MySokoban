/*
** EPITECH PROJECT, 2020
** B-PSU-200-COT-2-1-mysokoban-yemalin.agbangla
** File description:
** largest_window.c
*/

#include "../include/my_sokoban.h"

void possession(char **str)
{
    int i;
    char *msg = "Elargissez votre fenetre svp";

    for (i = 0; str[i] != NULL; i++);
    for ( ; LINES < i || COLS < my_strlen(str[0]); ) {
        clear();
        mvprintw(LINES/2, (COLS/2) - (my_strlen(msg) / 2), msg);
        refresh();
    }
    return ;
}
