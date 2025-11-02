/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <wkrati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 01:46:15 by wkrati            #+#    #+#             */
/*   Updated: 2025/10/24 16:59:36 by wkrati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*hlp;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	hlp = *lst;
	while (hlp->next)
		hlp = hlp->next;
	hlp->next = new;
	new->next = NULL;
}
/*#include <stdio.h>

int	main()
{
	t_list *a = ft_lstnew("lwl");
	t_list *b = ft_lstnew("tani");
	ft_lstadd_back(&a, b);
	printf("%s\n", (char *)a->next->content);
	free(b);
	free(a);
}*/
