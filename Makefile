NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra #FIXME
SRCS = ft_printf.c \
		utils/utils.c utils/parsing.c utils/arg_utils.c utils/utils2.c \
		utils/putunbr_base.c \
		patterns/d_pattern.c patterns/print_pattern.c patterns/c_pattern.c \
		patterns/s_pattern.c patterns/p_pattern.c patterns/u_pattern.c patterns/xx_pattern.c
LIBFT_PATH = libft/
LIBFT_NAME = libft.a
OBJS = $(SRCS:.c=.o)

all: $(NAME)
	
%.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(LIBFT_NAME) $(OBJS)
	@cp libft/libft.a ./$(NAME)
	@ar rc $(NAME) $(OBJS) $(LIBFT_PATH)$(LIBFT_NAME)
	@ranlib $(NAME)

$(LIBFT_NAME):
	@cd $(LIBFT_PATH) && $(MAKE) bonus && cd ..

clean:
	@rm -f $(OBJS)
	@rm -f .*.swp
	@rm -f */.*.swp
	@rm -f *.so
	@rm -f a.out
	@cd $(LIBFT_PATH) && $(MAKE) clean && cd ..

fclean: clean
	@rm -f $(NAME)
	@cd $(LIBFT_PATH) && $(MAKE) fclean && cd ..

re: fclean all

.PHONY: all clean fclean re bonus
