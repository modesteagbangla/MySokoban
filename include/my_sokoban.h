/*
** EPITECH PROJECT, 2020
** B-PSU-200-COT-2-1-mysokoban-yemalin.agbangla
** File description:
** my_sokoban.h
*/

#ifndef MY_SOKOBAN_H_
#define MY_SOKOBAN_H_


#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct opening{
    char *buf;
    int fd;
    int rd;
}opening;

void display_middle(char **str);
int my_strlen(char *str);
int i_compare(char const *s_one, char const *s_two);
int i_count(char const *str);
int usage(int ac, char **av);
void my_putstr(char *str);
void initialize(opening file);
int open_file(int ac, char **av);
int compt_line(char *str);
char **double_table(char *str);
int compt_colum(char *str);
int check_charact(char **str_s);
void display_table(char **str);
void display_win(char **str);
void my_release(char **str);
int *find_pos(char **str, char s);
void modify(char **str, int i, char **temp);
char **copy_str(char **str);
void possession(char **str);
void progress_right_r(int i, char **str);
void progress_left_left(int i, char **str);
void progress_down_down(int i, char **str);
void progress_up_up(int i , char **str);
void modify(char **str, int i, char **temp);
void restitute(char **temp, char **str);
void progress_left(char **str);
void progress_down(char **str);
void progress_up(char **str);
void progress_right(char **str);
int check_barrier(char **str);
void replace(int i, char **temp, char **str);
void check_win(char **temp, char **str);
void approval_losing(char **str);

#endif