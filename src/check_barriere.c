/*
** EPITECH PROJECT, 2020
** B-PSU-200-COT-2-1-mysokoban-yemalin.agbangla
** File description:
** check_barriere.c
*/

#include "../include/my_sokoban.h"

int check_barrier(char **str)
{
    for (int i = 0; str[i] != NULL; i++) {
        for (int j = 0; str[i][j] != '\0'; j++) {
            if (str[i][j] == 'O') {
                return (1);
            }
            else continue;
        }
    }
    return (0);
}
