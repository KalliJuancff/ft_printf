# target N/objetivo N	prerequisitos N/dependencias N/
#	recipe N/acciones N/comandos N/instrucciones N


NAME = libftprintf.a
SRC_FILES = ft_printf.c
OBJ_FILES = ${SRC_FILES:.c=.o}
DEP_FILES = ${SRC_FILES:.c=.d}


${NAME}: ${OBJ_FILES}
	ar rcs ${NAME} $?

%.o: %.c
	gcc -o $@ -Wall -Wextra -Werror -MMD -c $<

-include ${DEP_FILES}


.PHONY: all clean fclean re

all: ${NAME}

clean:
	rm -f ${OBJ_FILES}
	rm -f ${DEP_FILES}

fclean: clean
	rm -f ${NAME}

re: fclean all
