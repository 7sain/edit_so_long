/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:37:35 by hualhash          #+#    #+#             */
/*   Updated: 2022/11/24 19:49:00 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// locates the first occurrence of c.

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	p_c;

	str = (char *)s;
	p_c = (char)c;
	while (*str != p_c)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
	str++;
	}
	return (str);
}
