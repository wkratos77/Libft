/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <wkrati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 00:54:27 by wkrati            #+#    #+#             */
/*   Updated: 2025/10/24 16:59:33 by wkrati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*#include <stdio.h>

int	main()
{
	t_list *a = ft_lstnew("tani");
	t_list *b = ft_lstnew("lwl");
	ft_lstadd_front(&a, b);
	printf("%s\n", (char *)a->content);
	free(a->next);
	free(a);
}*/
