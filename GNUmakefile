NAME = libftprintf.a
OBJS = write_char.o \
	write_number.o \
	write_string.o \
	write_hexa.o \
	ft_printf.o
DEPS = $(OBJS:%.o=%.d)
CFLAGS = -Wall -Wextra -Werror

$(NAME) : $(OBJS) Makefile
	$(AR) rcs $(NAME) $(OBJS)

%.o : %.c
	$(CC) -MMD $(CFLAGS) -c $< -o $@
-include $(DEPS)


.PHONY: all clean fclean re

all : $(NAME)

clean :
	rm -f $(OBJS)
	rm -f $(DEPS)

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)
