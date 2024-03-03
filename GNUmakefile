###############
#  VARIABLES  #
###############

NAME := libftprintf.a
SRC_FILES := write_char.c \
             write_string.c \
             write_number.c \
             write_hexa.c
OBJ_FILES := $(patsubst %.c,%.o,$(SRC_FILES))
DEP_FILES := $(patsubst %.c,%.d,$(SRC_FILES))


#############
# OVERRIDES #
# ###########

ARFLAGS = rcs
CFLAGS = -Wall -Wextra -Werror


$(NAME) : GNUmakefile $(OBJ_FILES)
		$(AR) $(ARFLAGS) $(NAME) $(OBJ_FILES)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@


###############
# PHONY RULES #
# #############

.PHONY: all clean fclean re info

all : $(NAME)

clean :
	$(RM) $(OBJ_FILES)
	$(RM) $(DEP_FILES)

fclean : clean
	$(RM) $(NAME)

re : fclean all

info :
	$(info $(SRC_FILES))
	$(info $(OBJ_FILES))
	$(info $(CC))
	$(info $(ARFLAGS))
	$(info $(CFLAGS))
