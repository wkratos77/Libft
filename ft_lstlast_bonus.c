/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <wkrati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 01:39:12 by wkrati            #+#    #+#             */
/*   Updated: 2025/10/24 16:50:51 by wkrati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*#include <stdio.h>

int	main()
{
	t_list *a = ft_lstnew("lwl");
	t_list *b = ft_lstnew("lkhr");
	ft_lstadd_back(&a, b);
	printf("%s\n", (char *)ft_lstlast(a)->content);
	free(b);
	free(a);
}*/
