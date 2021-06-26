/*
** EPITECH PROJECT, 2020
** B-PSU-200-COT-2-1-mysokoban-yemalin.agbangla
** File description:
** free_display.c
*/

#include "../include/my_sokoban.h"

void display_table(char **str)
{
    for (int i = 0; str[i] != NULL; i++) {
        printw(str[i]);
        printw("\n");
    }
}

void my_release(char **str)
{
    for (int j = 0; str[j] != NULL; j++)
        free(str[j]);
    free(str);
}