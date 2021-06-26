/*
** EPITECH PROJECT, 2020
** B-PSU-200-COT-2-1-mysokoban-yemalin.agbangla
** File description:
** validate_char.c
*/

#include "../include/my_sokoban.h"

int check_charact(char **str_s)
{
    int i = 0, j = 0;

    for (;  str_s[i] != NULL; i++) {
        for (j = 0; str_s[i][j] != '\0'; j++) {
            if (str_s[i][j] == ' ' || str_s[i][j] == '#' || str_s[i][j] == 'X'
                || str_s[i][j] == 'O' || str_s[i][j] == 'P')
                continue;
            else exit (84);
        }
    }
    return (0);
}