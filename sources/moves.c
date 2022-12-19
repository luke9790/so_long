/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:09:45 by lmasetti          #+#    #+#             */
/*   Updated: 2022/12/19 11:09:46 by lmasetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	display_moves(t_game *game)
{
	char	*str;

	str = ft_itoa(game->moves);
	if (game->endgame == 0)
	{
		mlx_string_put(game->mlx, game->win, 25, 20, 0xFFFFFF, "MOVES: ");
		mlx_string_put(game->mlx, game->win, 70, 20, 0xFFFFFF, str);
	}
	if (game->endgame == 1)
	{
		mlx_string_put(game->mlx, game->win, 25, 20, 0xFFFFFF, "GAME OVER!");
		img_draw(game, game->img_gameover, 640, 360);
	}
	if (game->endgame == 2)
	{
		mlx_string_put(game->mlx, game->win, 25, 20, 0xFFFFFF, "YOU WIN!");
		img_draw(game, game->img_youwin, 590, 332);
	}
	free(str);
}
