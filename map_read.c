/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:01:12 by hualhash          #+#    #+#             */
/*   Updated: 2023/02/01 18:59:31 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	map_read(char *filename, t_game *game)
{
	int		fd;
	char	*line;

	fd = open(filename, O_RDONLY);
	line = get_next_line(fd);
	game->height = 0;
	game->width = ft_strlen(line) - 1;
	game->str_line = ft_strdup(line);
	free(line);
	while (line)
	{
		game->height++;
		line = get_next_line(fd);
		if (line)
		{
			game->str_line = ft_strjoin_no_line(game->str_line, line);
		}
	}
	close(fd);
	printf("%s\n", game->str_line);
	printf("%d\n", game->height);
	printf("%d\n", game->width);
}
