/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:06:54 by hualhash          #+#    #+#             */
/*   Updated: 2023/02/01 15:58:25 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	size_t	i;
// 	size_t	z;
// 	char	*blank;
// 	char	len;

// 	i = 0;
// 	z = 0;
// 	if (!s1 || !s2)
// 		return (NULL);
// 	len = ft_strlen(s1) + ft_strlen(s2);
// 	blank = (char *)malloc(sizeof(char) * (len + 1));
// 	if (!(blank))
// 		return (NULL);
// 	while (s1[i] != '\0')
// 	{
// 		blank[i] = s1[i];
// 		i++;
// 	}
// 	while (s2[z] != '\0')
// 		blank[i++] = s2[z++];
// 	blank[i] = '\0';
// 	return (blank);
// }

char	*ft_strjoin_no_line(char *s1, char *s2)
{
	char			*str;
	size_t			i;
	size_t			j;

	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
	{
		free(s1);
		return (NULL);
	}
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (s1[i] != '\n')
			str[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (s2[i] != '\n')
			str[j++] = s2[i];
		i++;
	}
	str[j] = '\0';
	return (free(s1), str);
}
