/*
** EPITECH PROJECT, 2020
** B-PSU-200-COT-2-1-mysokoban-yemalin.agbangla
** File description:
** charge_map.c
*/

#include "../include/my_sokoban.h"

char **double_table(char *buffer)
{
    int i = 0, j, x = 0, a = 0;
    int line = compt_line(buffer);
    char **str_s = malloc(sizeof(char *) * (line + 10));

    for (char *str = buffer; *str != '\0'; i++) {
        for (a = 0; str[a] != '\n' && str[a] != '\0'; a++);
        str_s[i] = malloc(a + 1);
        for (j = 0; j < a && *str != '\n' && *str != '\0'; j++, str++) {
            str_s[i][j] = *str;
        }
        str_s[i][j] = '\0';
        if (*str != '\0')
            str++;
    }
    str_s[i] = NULL;
    return (str_s);
}
