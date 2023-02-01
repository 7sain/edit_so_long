/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:10:49 by hualhash          #+#    #+#             */
/*   Updated: 2023/02/02 00:06:48 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  allocate enough memory to hold the old string.

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*out;

	i = 0;
	j = 0;
	len = ft_strlen(s1);
	out = malloc(sizeof(char) * len + 1);
	if (!out)
		return (NULL);
	while (i <= len - 1)
	{
		if (s1[i] != '\n')
		{
			out[j] = s1[i];
			j++;
		}
		i++;
	}
	out[j] = '\0';
	return (out);
}

// char	*ft_strdup(const char *s1)
// {
// 	size_t	i;
// 	size_t	len;
// 	char	*out;

// 	i = 0;
// 	len = ft_strlen(s1);
// 	out = malloc(sizeof(char) * len + 1);
// 	if (!out)
// 		return (NULL);
// 	while (i <= len)
// 	{
// 		out[i] = s1[i];
// 		i++;
// 	}
// 	return (out);
// }
