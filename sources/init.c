#include "so_long.h"

static void	img_init(t_game *game)
{
	int	widht;
	int	height;
	
	widht = 640;
	height = 360;
	
	game->img_backg = mlx_xpm_file_to_image
		(game->mlx, "assets/images/pavimento32.xpm", &game->img_w, &game->img_h);
	game->img_wall = mlx_xpm_file_to_image
		(game->mlx, "assets/images/muro32.xpm", &game->img_w, &game->img_h);
	game->img_player = mlx_xpm_file_to_image
		(game->mlx, "assets/images/pdes.xpm", &game->img_w, &game->img_h);
	game->img_colect = mlx_xpm_file_to_image
		(game->mlx, "assets/images/diamante32.xpm", &game->img_w, &game->img_h);
	game->img_exit = mlx_xpm_file_to_image
		(game->mlx, "assets/images/E1.xpm", &game->img_w, &game->img_h);
	game->img_enemie = mlx_xpm_file_to_image
		(game->mlx, "assets/images/EN1.xpm", &game->img_w, &game->img_h);
	game->img_gameover = mlx_xpm_file_to_image
		(game->mlx, "assets/images/gameover.xpm", &game->map_w, &game->map_h);
	game->img_youwin = mlx_xpm_file_to_image
		(game->mlx, "assets/images/youwin.xpm", &game->map_w, &game->map_h);
}

static void	size_window_init(t_game *game)
{
	int	i;

	game->map_w = ft_strlen(game->map[0]) * 32;
	i = 0;
	while (game->map[i])
		i++;
	game->map_h = i * 32 + 32;
}

void	game_init(t_game *game)
{
	game->mlx = mlx_init();
	size_window_init(game);
	game->win = mlx_new_window(game->mlx, game->map_w, game->map_h, "so_long");
	game->moves = 0;
	game->endgame = 0;
	game->pos_enemies = 1;
	game->loop = 0;
	img_init(game);
	map_draw(game);
}
