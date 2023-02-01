/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:11:25 by hualhash          #+#    #+#             */
/*   Updated: 2023/01/31 21:19:05 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

int	check_new_line(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

// char	*ft_strjoin_no_line(char *s1, char *s2)
// {
// 	char			*str;
// 	size_t			i;
// 	size_t			j;

// 	if (!s1)
// 	{
// 		s1 = (char *)malloc(1 * sizeof(char));
// 		s1[0] = '\0';
// 	}
// 	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
// 	if (!str)
// 	{
// 		free(s1);
// 		return (NULL);
// 	}
// 	i = 0;
// 	j = 0;
// 	while (s1[i])
// 	{
// 		if (s1[i] != '\n')
// 			str[j++] = s1[i];
// 		i++;
// 	}
// 	i = 0;
// 	while (s2[i])
// 	{
// 		if (s2[i] != '\n')
// 			str[j++] = s2[i];
// 		i++;
// 	}
// 	str[j] = '\0';
// 	return (free(s1), str);
// }

char	*ft_strjoin(char *s1, char *s2)
{
	char			*str;
	size_t			i;
	size_t			j;

	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) +1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		// if (s1[i] == '\n')
		// 	i++;
		str[j++] = s1[i++];
	}
	i = 0;
	while (s2[i] != '\0')
	{
		// if (s2[j] == '\n')
		// 	j++;
		str[j++] = s2[i++];
	}
	str[j] = '\0';
	free (s1);
	return (str);
}

// char	*ft_strnhuspenjoin(char *s1, char *s2)
// {
// 	char			*str;
// 	size_t			i;
// 	size_t			j;

// 	if (!s1)
// 	{
// 		s1 = (char *)malloc(1 * sizeof(char));
// 		s1[0] = '\0';
// 	}
// 	// int kungly = 0;//14 without \0 dec husainulehi_gae
// 	if (ft_strlen(s1) - 1 )
// 	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) +1));
// 	if (!str)
// 		return (NULL);
// 	i = 0;
// 	j = 0;
// 	while (s1[i] != '\0')
// 		str[j++] = s1[i++];
// 	i = 0;
// 	while (s2[i] != '\0')
// 		str[j++] = s2[i++];
// 	str[j] = '\0';
// 	free (s1);
// 	return (str);
// }

char	*get_line(char *s)
{
	char	*ptr;
	int		i;

	i = 0;
	if (!s || s[i] == 0)
		return (0);
	ptr = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != '\n')
	{
		ptr[i] = s[i];
		i++;
	}
	if (s[i] == '\n')
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_cut(char *s)
{
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] == 0)
	{
		free(s);
		return (NULL);
	}
	i++;
	ptr = malloc((ft_strlen(s) - i + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	j = 0;
	while (s[i])
		ptr[j++] = s[i++];
	ptr[j] = '\0';
	free(s);
	return (ptr);
}

// static int	count_words(const char *str, char c)
// {
// 	int		i;
// 	int		trigger;

// 	i = 0;
// 	trigger = 0;
// 	while (*str)
// 	{
// 		if (*str != c && trigger == 0)
// 		{
// 			trigger = 1;
// 			i++;
// 		}
// 		else if (*str == c)
// 			trigger = 0;
// 		str++;
// 	}
// 	return (i);
// }

// static char	*word_dup(const char *str, int start, int finish)
// {
// 	char	*word;
// 	int		i;

// 	i = 0;
// 	word = malloc((finish - start + 1) * sizeof(char));
// 	while (start < finish)
// 		word[i++] = str[start++];
// 	word[i] = '\0';
// 	return (word);
// }

// char	**ft_split(char const *s, char c)
// {
// 	size_t	i;
// 	size_t	j;
// 	int		index;
// 	char	**split;

// 	if (!s)
// 		return (NULL);
// 	split = malloc((count_words(s, c) + 1) * sizeof(char *));
// 	if (!split)
// 		return (0);
// 	i = -1;
// 	j = 0;
// 	index = -1;
// 	while (++i <= ft_strlen(s))
// 	{
// 		if (s[i] != c && index < 0)
// 			index = i;
// 		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
// 		{
// 			split[j++] = word_dup(s, index, i);
// 			index = -1;
// 		}
// 	}
// 	split[j] = 0;
// 	return (split);
// }