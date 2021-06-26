/*
** EPITECH PROJECT, 2020
** B-PSU-200-COT-2-1-mysokoban-yemalin.agbangla
** File description:
** open_file.c
*/

#include "../include/my_sokoban.h"

int open_file(int ac, char **av)
{
    struct stat open_f;
    stat(av[1], &open_f);
    int fd = open(av[1], O_RDONLY);
    if (fd == -1)
        return (84);
    char *buf = malloc(open_f.st_size + 1);
    int rd = read(fd, buf, open_f.st_size);
    if (rd == -1)
        return (84);
    buf[open_f.st_size] = '\0';
    char **str_s = double_table(buf);
    int err_r = check_charact(str_s);
    if (err_r == 84)
        return (84);
    display_middle(str_s);
    close(fd);
}

char **copy_str(char **str)
{
    char **temp = NULL;
    int i = 0, j = 0;

    for (; str[i] != NULL; i++);
    temp = malloc(sizeof(char *) * (i + 1));
    for (i = 0; str[i] != NULL; i++) {
        for (j = 0; str[i][j] != '\0'; j++);
        temp[i] = malloc(j + 1);
        for (j = 0; str[i][j] != '\0'; temp[i][j] = str[i][j], j++);
        temp[i][j] = '\0';
    }
    temp[i] = NULL;
    return (temp);
}
