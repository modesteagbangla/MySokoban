/*
** EPITECH PROJECT, 2020
** B-PSU-200-COT-2-1-mysokoban-yemalin.agbangla
** File description:
** find_pos.c
*/

#include "../include/my_sokoban.h"

int *find_pos(char **str, char s)
{
    int *pos = malloc(sizeof(int) * 2);

    for (int i = 0; str[i] != NULL; i++)
        for (int j = 0; str[i][j] != '\0'; j++)
            if (str[i][j] == s) {
                pos[0] = i;
                pos[1] = j;
            }
    return (pos);
}