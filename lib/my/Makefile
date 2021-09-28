##
## EPITECH PROJECT, 2020
## makefile
## File description:
## lib makefile
##

EXEPT 	=	./f_subject/my_str_to_word_array.c

SRC	=	$(filter-out $(EXEPT), $(wildcard **/*.c **/**/*.c *.c))

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

IFLAGS	=	-I include/

CFLAGS	=	-W -Wextra -Wall -Werror -g $(IFLAGS)

all:	$(NAME) clean

$(NAME):$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp include/*.h ../../include/lib
	cp $(NAME) ../

clean:
	rm -f $(OBJ)
	rm -f *~

fclean: clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re:	fclean all
