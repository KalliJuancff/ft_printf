# REGLA N:
# target N/objetivo N	prerequisitos N/dependencias N/
#	recipe N/acciones N/comandos N/instrucciones N


NAME = libftprintf.a
SRC_FILES = ft_printf.c \
	write_char.c \
	write_string.c \
	write_number.c \
	write_hexa.c
OBJ_FILES = ${SRC_FILES:.c=.o}
DEP_FILES = ${SRC_FILES:.c=.d}


${NAME}: ${OBJ_FILES}
	ar rcs ${NAME} $?

%.o: %.c
	gcc -o $@ -Wall -Wextra -Werror -MMD -c $<

-include ${DEP_FILES}


.PHONY: all clean fclean re  norm comp run

all: ${NAME}

clean:
	rm -f ${OBJ_FILES}
	rm -f ${DEP_FILES}

fclean: clean
	rm -f ${NAME}

re: fclean all

norm:
	norminette ${SRC_FILES} *.h

comp:
	gcc -Wall -Wextra -Werror -Wno-format ${SRC_FILES}  main.c

run:
	@./a.out
