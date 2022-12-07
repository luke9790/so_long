
LIBFT_PATH		=	./libraries/libft
LIBFT			=	$(LIBFT_PATH)/libft.a

MINILIBX_PATH		=	./libraries/minilibx
MINILIBX		=	$(MINILIBX_PATH)/libmlx.a

SOURCES_FILES		=	so_long.c \
					draw.c \
					init.c \
					read_map.c \
					map_validate.c \
					player_update.c \
					gameplay.c \
					exit_game.c \
					moves.c \
					animation.c

SOURCES_DIR		=	sources

HEADER			=	$(SOURCES_DIR)/so_long.h

SOURCES			=	$(addprefix $(SOURCES_DIR)/, $(SOURCES_FILES))	

OBJECTS			= 	$(SOURCES:.c=.o)

NAME			=	so_long

CC				=	gcc
RM				=	rm -f

CFLAGS			=	-Wall -Wextra -Werror
MLXFLAGS		=	-L. -lXext -L. -lX11

.c.o:
				$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:			$(NAME)

exe:			./so_long assets/maps/big.ber

$(NAME):		$(LIBFT) $(MINILIBX) $(OBJECTS) $(HEADER)
				$(CC) $(CFLAGS) $(OBJECTS) $(LIBFT) $(MINILIBX) $(MLXFLAGS) -o $(NAME)

$(LIBFT):
				$(MAKE) -C $(LIBFT_PATH)

$(MINILIBX):
				$(MAKE) -C $(MINILIBX_PATH)

clean:
				$(MAKE) -C $(LIBFT_PATH) clean
				$(MAKE) -C $(MINILIBX_PATH) clean
				$(RM) $(OBJECTS)

fclean:			clean
				$(MAKE) -C $(LIBFT_PATH) fclean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re libft minilibx exe
