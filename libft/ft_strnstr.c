/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:38:45 by hualhash          #+#    #+#             */
/*   Updated: 2022/11/24 19:50:09 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// search for a needle inside haystack and print it.

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (*needle == 0 || haystack == needle)
		return ((char *)haystack);
	if (!len)
		return (0);
	i = ft_strlen(needle);
	while (*haystack && i <= len)
	{
		if (!(ft_strncmp((char *)haystack, (char *)needle, i)))
			return ((char *)haystack);
		len--;
		haystack++;
	}
	return (NULL);
}
