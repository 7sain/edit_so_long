/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:37:28 by hualhash          #+#    #+#             */
/*   Updated: 2022/11/24 19:48:05 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copies n bytes from memory area src to memory area dst.

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*p_dst;
	char	*p_src;

	i = 0;
	p_dst = dst;
	p_src = (char *)src;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		p_dst[i] = p_src[i];
		i++;
	}
	return (dst);
}
