/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   characters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:52:21 by lmasetti          #+#    #+#             */
/*   Updated: 2022/11/29 11:53:08 by lmasetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(void)
{
	void	*mlx;
	void	*img;
	char	*relative_path = "./sprite/Wizard/Idle.png";
	int		img_width;
	int		img_height;

	mlx = mlx_init();
	img = mlx_png_file_to_image(mlx, relative_path, &img_width, &img_height);
}