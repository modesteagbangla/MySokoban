##
## EPITECH PROJECT, 2020
## B-PSU-200-COT-2-1-mysokoban-yemalin.agbangla
## File description:
## Makefile
##

NAME	= my_sokoban

CC	= gcc

RM	= rm -f *~ include/*~ src/*~

SRCS = $(shell find */*.c)

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@	$(CC) $(SRCS) -o $(NAME) -lncurses -g3

clean:
	@	$(RM) $(OBJS)

fclean: clean
	@	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
