NAME = libftprintf.a
SRC =	ft_printf.c \
		print_char.c \
		print_inti.c \
		print_low.c \
		print_percenti.c \
		print_str.c \
		print_un_int.c \
		print_upp.c \
		print_pointer.c \
		print_putstr_itoa.c \

OBJ = $(SRC:.c=.o)
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
AR = ar rcs
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(AR) $(NAME) $(OBJ) $(LIBFT)
	$(AR) $(NAME) $(LIBFT_DIR)/*.o

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all