/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <wkrati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:49:37 by wkrati            #+#    #+#             */
/*   Updated: 2025/10/24 16:53:41 by wkrati           ###   ########.fr       */
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
/*static void	del(void *p) 
{ 
	free(p); 
}
int	main()
{
	t_list *a = ft_lstnew(strdup("one"));
	t_list *b = ft_lstnew(strdup("two"));
	ft_lstadd_back(&a, b);
	ft_lstclear(&a, del);
}*/
