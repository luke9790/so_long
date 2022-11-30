
#include "so_long.h"

int main(void)
{
 	t_win	tutorial;
	t_img	image;

	tutorial = new_program(300, 300, "tutorial");
	if (!tutorial.win_ptr)
		return (2);
	image = new_img(300, 300, tutorial);

	{
		/* Put white pixel */
		put_pixel_img(image, 150, 150, 0x00FFFFFF);
		mlx_put_image_to_window (image.win.mlx_ptr, image.win.win_ptr, image.img_ptr, 0, 0);
	}

	mlx_hook(tutorial.win_ptr, 17, 0, exit_tutorial, &tutorial);

	{
	/*Draw a gigant GREEN square 30x30 */
	draw_square((t_square){0, 0, 30, 0x00FF00}, image);
	mlx_put_image_to_window (image.win.mlx_ptr, image.win.win_ptr, image.img_ptr, 0, 0);
	}
	{
	/*Draw a gigant GREEN square 30x30 */
	draw_square((t_square){31, 31, 30, 0xFF0000}, image);
	mlx_put_image_to_window (image.win.mlx_ptr, image.win.win_ptr, image.img_ptr, 0, 0);
	}
	{
	/*Draw a gigant GREEN square 30x30 */
	draw_square((t_square){62, 62, 30, 0x0000FF}, image);
	mlx_put_image_to_window (image.win.mlx_ptr, image.win.win_ptr, image.img_ptr, 0, 0);
	}
	{
	/*Draw a gigant GREEN square 30x30 */
	draw_square((t_square){93, 93, 30, 0xFF0000}, image);
	mlx_put_image_to_window (image.win.mlx_ptr, image.win.win_ptr, image.img_ptr, 0, 0);
	}
	/*HOOOOOOK*/
        mlx_key_hook (tutorial.win_ptr, read_keys, &image);
        /**********/
        mlx_hook(tutorial.win_ptr, 17, 0, exit_tutorial, &tutorial);

	mlx_loop(tutorial.mlx_ptr);
	return (0);
}
