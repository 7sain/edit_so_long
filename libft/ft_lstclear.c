/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hualhash <hualhash@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 22:30:21 by hualhash          #+#    #+#             */
/*   Updated: 2022/10/30 22:50:51 by hualhash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur;

	if (!del || !lst)
		return ;
	while (*lst != NULL)
	{
		del((*lst)->content);
		cur = *lst;
		*lst = cur->next;
		free(cur);
	}
	*lst = NULL;
}
