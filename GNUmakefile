###############
#  VARIABLES  #
###############

NAME := libftprintf.a
SRC_FILES := write_char.c \
             write_string.c \
             write_number.c \
             write_hexa.c \
			 ft_printf.c
OBJ_FILES := $(patsubst %.c,%.o,$(SRC_FILES))
DEP_FILES := $(patsubst %.c,%.d,$(SRC_FILES))


###############
#  OVERRIDES  #
###############

CFLAGS = -Wall -Wextra -Werror -MMD
ARFLAGS = rcs


###########
#  RULES  #
###########

$(NAME) : GNUmakefile $(OBJ_FILES)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ_FILES)

-include $(DEP_FILES)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

main.o : main.c
	$(CC) $(CFLAGS) -Wno-format -c $< -o $@
	$(CC) main.o $(NAME)


###############
# PHONY RULES #
# #############

.PHONY: all clean fclean re norm comp run info

all : $(NAME)

clean :
	$(RM) $(OBJ_FILES)
	$(RM) main.o
	$(RM) $(DEP_FILES)
	$(RM) main.d

fclean : clean
	$(RM) $(NAME)
	$(RM) a.out

re : fclean all

norm :
	@norminette $(SRC_FILES)

comp : main.o $(NAME)

run: comp
	@./a.out

info :
	$(info $(OBJ_FILES))
	$(info $(CC))
	$(info $(ARFLAGS))
	$(info $(CFLAGS))
