/*
** EPITECH PROJECT, 2020
** B-PSU-200-COT-2-1-mysokoban-yemalin.agbangla
** File description:
** execute_function.c
*/

#include "../include/my_sokoban.h"

void replace(int i, char **temp, char **str)
{
    while (1)
    {
        check_win(temp, str);
        approval_losing(str);
        possession(str);
        i = getch();
        if (i == ' ') {
            clear();
            refresh();
            my_release(str);
            str = temp;
            temp = copy_str(str);
            display_table(str);
        } else if (i == 'm') {
            my_release(str);
            endwin();
            exit(0);
        }
        else modify(str, i, temp);
    }
}
