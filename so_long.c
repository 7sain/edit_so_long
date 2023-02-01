/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:36:36 by hualhash          #+#    #+#             */
/*   Updated: 2023/02/02 00:25:58 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	void	*map;
	int		key_code;
	t_game	game;
	t_param	param;
	t_image	image;

	if (ac != 2)
	{
		printf("Map is missing.\n");
		return (0);
	}
	if (ac == 2)
	{
		printf("hi\n");
		map_read(av[1], &game);
		game.mlx = mlx_init();
		game.win = mlx_new_window(game.mlx, (game.width * 64), (game.height * 64), "so_long");
		ft_image(&image, &game);
		setting_img(&game, &image);
		param_init(&param);
		// mlx_hook(game.win, X_EVENT_KEY_RELEASE, 0, &key_press, &param);
		mlx_hook(game.win, X_EVENT_KEY_RELEASE, 0, &press_key, &game);
		mlx_loop(game.mlx);
	}
	// setting_img(game);
	// press_key(KEY_W, &game);
	// param_init(&param);
	// mlx_hook(win, X_EVENT_KEY_RELEASE, 0, &key_press, &param);
	// mlx_loop(mlx);
	// return (0);
}