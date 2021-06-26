/*
** EPITECH PROJECT, 2020
** B-PSU-200-COT-2-1-mysokoban-yemalin.agbangla
** File description:
** display_middle.c
*/

#include "../include/my_sokoban.h"

void display_middle(char **str)
{
    int i = 0;

    WINDOW *display;
    initscr();
    keypad(stdscr, 1);
    noecho();
    curs_set(0);
    char **temp = copy_str(str);
    display_table(str);
    replace(i, temp, str);
    my_release(str);
}
