##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## compile program + lib/my
##

SRC	=	src/main.c \
		src/push_swap.c \
		src/check_fts.c \
		src/fill_list.c \
		src/is_sorted.c \
		src/move_lists.c \
		src/manage_lists.c \
		src/count_lists.c \
		src/sort_list.c

OBJ	=	$(SRC:.c=.o)

NAME	=	push_swap

CFLAGS	=	-I./lib/my/include/ -I./include -g

all:		$(NAME)

$(NAME):	$(OBJ)
			make all -C lib/my/
			gcc -g3 -o $(NAME) $(OBJ) -L./lib/my -lmy $(CFLAGS)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)
			make fclean -C lib/my/

re:			fclean all
