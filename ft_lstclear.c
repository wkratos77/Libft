/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <wkrati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:49:37 by wkrati            #+#    #+#             */
/*   Updated: 2025/10/19 16:09:06 by wkrati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*hlp;
	t_list	*nxt;

	hlp = *lst;
	while (hlp)
	{
		nxt = hlp->next;
		del(hlp->content);
		free(hlp);
		hlp = nxt;
	}
	*lst = NULL;
}
