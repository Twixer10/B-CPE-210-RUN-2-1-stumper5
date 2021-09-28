##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## none
##

SRC	=	src/main.c

CFLAGS	=	-W -Wall -Werror -Wextra -g

NAME	=	ai

NAME_TEST=	units_tests

LFLAGS	=	-L lib/ -lmy

IFLAGS	=	-I include/ -I include/lib

all:
	make -C lib/my all
	gcc -o $(NAME) $(SRC) $(IFLAGS) $(LFLAGS) $(CFLAGS)

clean:
	make -C lib/my clean
	rm -f *~

fclean: clean
	make -C lib/my fclean
	rm -f $(NAME)

cinc:
	rm include/lib/*.h

cph:
	cp lib/my/include/*.h include/lib

re: fclean all
	make -C lib/my re
