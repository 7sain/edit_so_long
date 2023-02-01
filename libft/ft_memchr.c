/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:37:20 by hualhash          #+#    #+#             */
/*   Updated: 2022/10/25 14:03:28 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// locates the first occurrence of c within size n.

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s2;
	unsigned char	c2;

	s2 = (unsigned char *)s;
	c2 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*s2 == c2)
		{
			return (s2);
		}
		s2++;
		i++;
	}
	return (NULL);
}

// int main () {
//    const char str[] = "Husain Faisal Alhashmi.";
//    const char ch = 's';
//    char *ret;

//    ret = ft_memchr(str, ch, 2);

//    printf("String after |%c| is - |%s|\n", ch, ret);

//    return(0);
// }