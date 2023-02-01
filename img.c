/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:07:13 by hualhash          #+#    #+#             */
/*   Updated: 2023/02/01 20:22:33 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_image(t_image *image, t_game *game)
{
	image->img = mlx_xpm_file_to_image(game->mlx, "./images/coin1.xpm", &game->wid, &game->hei);
	image->img2 = mlx_xpm_file_to_image(game->mlx, "./images/wall3.xpm", &game->wid, &game->hei);
	image->img3 = mlx_xpm_file_to_image(game->mlx, "./images/chara3.xpm", &game->wid, &game->hei);
	image->img4 = mlx_xpm_file_to_image(game->mlx, "./images/earth3.xpm", &game->wid, &game->hei);
	image->img5 = mlx_xpm_file_to_image(game->mlx, "./images/space1.xpm", &game->wid, &game->hei);
	if (image->img == NULL || image->img2 == NULL \
	|| image->img3 == NULL || image->img4 == NULL || image->img5 == NULL)
		exit(1);
}
