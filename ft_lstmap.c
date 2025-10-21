/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <wkrati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:20:47 by wkrati            #+#    #+#             */
/*   Updated: 2025/10/21 21:17:15 by wkrati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*node;
	void	*cont;

	list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		cont = f(lst->content);
		if (!cont)
			return (ft_lstclear(&list, del), NULL);
		node = ft_lstnew(cont);
		if (!node)
		{
			del(cont);
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, node);
		lst = lst->next;
	}
	return (list);
}
