/*
** EPITECH PROJECT, 2020
** B-PSU-200-COT-2-1-mysokoban-yemalin.agbangla
** File description:
** compt_line.c
*/

#include "../include/my_sokoban.h"

int compt_line(char *str)
{
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == '\n')
            j++;
    return (j+1);
}

int compt_colum(char *str)
{
    int i = 0;

    for (; str[i] != '\n'; i++);
    return (i);
}
