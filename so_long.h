/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:51:01 by lmasetti          #+#    #+#             */
/*   Updated: 2022/11/29 11:52:10 by lmasetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#include <stdlib.h>
#include "minilibx-linux/mlx.h"
#include <stdio.h>
#include <X11/X.h>
#include <X11/keysym.h>

# define ESC 65307
# define W = 119
# define A = 97
# define S = 115
# define D = 100
# define UP = 65362
# define DOWN 65364
# define LEFT 65361
# define RIGHT 65363

typedef struct s_win
{
	void	*mlx_ptr;
	void	*win_ptr;
	int		height;
	int		width;
}		t_win;

typedef struct s_img
{
	t_win	win;
	void	*img_ptr;
	char	*addr;
	int		h;
	int		w;
	int		bpp;
	int		endian;
	int		line_len;
}		t_img;

typedef struct s_square {
	unsigned short int	x;
	unsigned short int	y;
	unsigned short int	size;
	int					color;
}		t_square;

t_win new_program(int w, int h, char *str);
t_img	new_img(int w, int h, t_win window);
void	put_pixel_img(t_img img, int x, int y, int color);
int     exit_tutorial(t_win *window);
void	draw_square(t_square square, t_img img);
int     read_keys(int key_pressed, void *param);

#endif
