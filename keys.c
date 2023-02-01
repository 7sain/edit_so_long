/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 20:09:55 by hualhash          #+#    #+#             */
/*   Updated: 2023/02/02 00:51:27 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	press_key(int key_code, t_game *game, t_image *image)
{
	// if (key_code == KEY_ESC)
	// 	exit_game(game);
	if (key_code == KEY_W)
		move_w(game, image);
	// if (key_code == KEY_A)
	// 	move_a(game);
	// if (key_code == KEY_S)
	// 	move_s(game);
	// if (key_code == KEY_D)
	// 	move_d(game);
	if (key_code == KEY_ESC)
		exit(0);
	return (0);
}

void	move_w(t_game *game, t_image *image)
{
	int		i;

	i = 0;
	while (i++ < ft_strlen(game->str_line))
	{
	printf("str_line = %c\n", game->str_line[15]);
	printf("i = %d\n", i);
	printf("wid = %d\n", game->wid);
	printf("game->all_col: %d\n", game->all_col);
	printf("wid: %d\n", game->wid);
		if (game->str_line[i] == 'P')
			break ;
	}
	if (game->str_line[i - game->wid] == 'C')
		game->col_cnt++;
	if (game->str_line[i - game->wid] == 'E' && game->all_col == game->col_cnt)
		exit(0);
		// clear_game(g);
	else if (game->str_line[i - game->wid] != '1' && game->str_line[i - game->wid] != 'E')
	{
		game->str_line[i] = '0';
		game->str_line[i - game->wid] = 'P';
		game->walk_cnt++;
		printf("walk_cnt: %d\n", game->walk_cnt);
		setting_img(game, image);
	}
}
