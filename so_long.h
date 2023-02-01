/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:36:33 by hualhash          #+#    #+#             */
/*   Updated: 2023/02/01 22:19:53 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define X_EVENT_KEY_PRESS			2
# define X_EVENT_KEY_RELEASE		3

# define KEY_ESC		53
# define KEY_W			13
# define KEY_A			0
# define KEY_S			1
# define KEY_D			2

# include "./gnl/get_next_line.h"
# include "./libft/libft.h"
# include "./mlx/mlx.h"
# include <fcntl.h>
# include <string.h>

typedef struct s_param{
	int		x;
	int		y;
}				t_param;

typedef struct s_game{
	int		hei;
	int		wid;
	int		height;
	int		width;
	int		col_cnt;
	int		walk_cnt;
	int		all_col;
	void	*win;
	void	*mlx;
	char	*str_line;
}				t_game;

typedef struct s_image
{
	void	*img;
	void	*img2;
	void	*img3;
	void	*img4;
	void	*img5;
}				t_image;

void	map_read(char *filename, t_game *game);

void	setting_img(t_game *game, t_image *image);

void	ft_image(t_image *image, t_game *game);

void	param_init(t_param *param);

int		key_press(int keycode, t_param *param);

int		press_key(int key_code, t_game *game, t_image *image);

void	move_w(t_game *game, t_image *image);
#endif