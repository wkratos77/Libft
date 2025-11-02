/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <wkrati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:20:47 by wkrati            #+#    #+#             */
/*   Updated: 2025/10/24 16:59:20 by wkrati           ###   ########.fr       */
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
/*static void	*dup(void *p)
{
	return (ft_strdup((char *)p));
}
static void	del(void *p) 
{ 
	free(p); 
}
int	main()
{
	t_list *a = ft_lstnew("hi");
	t_list *b = ft_lstnew("yo");
	ft_lstadd_back(&a, b);

	t_list *m = ft_lstmap(a, add_x, del);
	printf("%s %s\n", (char *)m->content, (char *)m->next->content);

	ft_lstclear(&m, del);
	free(b);
	free(a);
}*/
