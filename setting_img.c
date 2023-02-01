/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setting_img.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:02:26 by hualhash          #+#    #+#             */
/*   Updated: 2023/02/02 00:49:43 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	setting_img(t_game *game, t_image *image)
{
	game->hei = 0;
	while (game->hei < game->height)
	{
		game->wid = 0;
		while (game->wid < game->width)
		{
			printf("game->mlx: %d\n", game->mlx);
			printf("game->win: %d\n", game->win);
			printf("game->img: %d\n", image->img2);
			if (game->str_line[game->hei * game->width + game->wid] == '1')
				mlx_put_image_to_window(game->mlx, game->win, image->img2, game->wid * 64, game->hei * 64);
			else if (game->str_line[game->hei * game->width + game->wid] == 'C')
				mlx_put_image_to_window(game->mlx, game->win, image->img, game->wid * 64, game->hei * 64);
			else if (game->str_line[game->hei * game->width + game->wid] == 'P')
				mlx_put_image_to_window(game->mlx, game->win, image->img3, game->wid * 64, game->hei * 64);
			else if (game->str_line[game->hei * game->width + game->wid] == 'E')
				mlx_put_image_to_window(game->mlx, game->win, image->img4, game->wid * 64, game->hei * 64);
			else
				mlx_put_image_to_window(game->mlx, game->win, image->img5, game->wid * 64, game->hei * 64);
			game->wid++;
	printf("game->wid: %d\n", game->wid);
		}
		game->hei++;
	printf("game->hei: %d\n", game->hei);
	}
	printf("game->height: %d\n", game->height);
	printf("game->width: %d\n", game->width);
}
