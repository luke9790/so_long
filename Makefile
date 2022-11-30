NAME = so_long.out
SRC = main.c utils.c
OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror
LINKS = minilibx-linux/libmlx.a -lX11 -lXext -lm

all: $(NAME)

$(NAME): $(OBJ)
	@gcc $(FLAGS) $(OBJ) $(LINKS) -o $(NAME)
	@rm $(OBJ)

$(OBJ): $(SRC)
	@gcc $(FLAGS) -c $(SRC)

exe: all
	@./$(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
