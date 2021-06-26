/*
** EPITECH PROJECT, 2020
** B-PSU-200-COT-2-1-mysokoban-yemalin.agbangla
** File description:
** my_strcmp.c
*/

#include "../include/my_sokoban.h"

int i_count(char const *str)
{
    int len = 0;

    for (; str[len] != '\0'; len++);
    return (len);
}

int i_compare(char const *s_one, char const *s_two)
{
    if ((i_count(s_one) < i_count(s_two)) || (i_count(s_one) > i_count(s_two)))
        return (1);
    else {
        for (int i = 0; s_one[i] != '\0'; i++) {
            if (s_one[i] == s_two[i]) {
                continue;
            }
            return ((s_one[i] == s_two[i]) ? 0 : 1);
        }
    }
    return (0);
}
