/*
** EPITECH PROJECT, 2020
** B-PSU-200-COT-2-1-mysokoban-yemalin.agbangla
** File description:
** my_strlen.c
*/

#include "../include/my_sokoban.h"

int my_strlen(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return (i);
}
